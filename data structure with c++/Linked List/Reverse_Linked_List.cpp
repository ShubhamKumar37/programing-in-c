struct Node
{
    int data;
    struct Node *next;
}

        * /

    class Solution
{
private:
    void RVL_Rec(Node *&Head, Node *Prev, Node *Curr)
    {
        if (Curr == NULL)
        {
            Head = Prev;
            return;
        }
        Node *Forward = Curr->next;
        RVL_Rec(Head, Curr, Forward);
        Curr->next = Prev;
    }

public:
    // Function to reverse a linked list.
    struct Node *reverseList(struct Node *Head)
    {
        // code here
        // return head of reversed list
        Node *Prev = NULL;
        Node *Curr = Head;
        RVL_Rec(Head, Prev, Curr);
        return Head;

        // if(Head==NULL || Head->next==NULL)
        // {
        //     return Head;
        // }
        // Node* Prev=NULL;
        // Node* Curr=Head;
        // Node* Forward=NULL;

        // while(Curr!=NULL)
        // {
        //     Forward=Curr->next;
        //     Curr->next=Prev;
        //     Prev=Curr;
        //     Curr=Forward;
        // }

        // return Prev;
    }
};