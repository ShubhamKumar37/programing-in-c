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
public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *Head)
    {
        // Your code here}
        if (Head->next == NULL)
        {
            return Head->data;
        }
        Node *Noob = Head;
        Node *Pro = Head;
        while (Pro != NULL && Pro->next != NULL)
        {
            Pro = Pro->next->next;
            Noob = Noob->next;
        }
        return Noob->data;
    }
};