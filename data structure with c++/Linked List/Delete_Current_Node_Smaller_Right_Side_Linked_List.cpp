The structure of linked list is the following

    struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
* /
    class Solution
{
private:
    Node *Reverse(Node *Head)
    {
        Node *Curr = Head;
        Node *Prev = NULL;
        Node *Forward = NULL;

        while (Curr != NULL)
        {
            Forward = Curr->next;
            Curr->next = Prev;
            Prev = Curr;
            Curr = Forward;
        }

        return Prev;
    }

public:
    Node *compute(Node *Head)
    {
        // your code goes here
        if (Head->next == NULL)
        {
            return Head;
        }

        Head = Reverse(Head);
        int Max_Val = INT_MIN;
        Node *Curr = Head;
        Node *Prev = NULL;
        Node *Forward = NULL;

        while (Curr != NULL)
        {

            Forward = Curr->next;
            if (Curr->data >= Max_Val) // Just update the value of Max_Val
            {
                Max_Val = Curr->data;
                Prev = Curr;
                Curr = Forward;
            }
            else // Deleted the node which is smaller then Max_Val
            {
                Node *T_Del = Curr;
                Prev->next = Forward;
                Curr = Forward;
                T_Del->next = NULL;
                free(T_Del);
            }
        }

        return Reverse(Head); // Reverse the list again
    }
};