
class Solution
{
    public:
    struct node *reverse (struct node *Head, int K)
    { 
        // Complete this method
        if(Head==NULL)
        {
            return NULL;
        }
        
        node* Prev=NULL;
        node* Curr=Head;
        node* Forward=NULL;
        int C=0;
        while(C<K && Curr!=NULL)
        {
            Forward=Curr->next;
            Curr->next=Prev;
            Prev=Curr;
            Curr=Forward;
            C++;
        }
        
        if(Forward!=NULL)
        {
            Head->next=reverse(Forward,K);
        }
        
        return Prev;
    }
};