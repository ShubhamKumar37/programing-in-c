class Solution{
  public:
  Node* Get_Middle(Node* Head)
    {
        Node* Slow=Head;
        Node* Fast=Head->next;
        
        while(Fast!=NULL && Fast->next!=NULL)
        {
            Fast=Fast->next->next;
            Slow=Slow->next;
        }
        return Slow;
    }
    
    Node* Reverse(Node* Head)
    {
        Node* Prev=NULL;    
        Node* Curr=Head;    
        Node* Forward=NULL;
        
        while(Curr!=NULL)
        {
            Forward=Curr->next;
            Curr->next=Prev;
            Prev=Curr;
            Curr=Forward;
        }
        
        return Prev;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *Head)
    {
        //Your code here
        if(Head->next==NULL)
        {
            return 1;
        }
        // Here we can say that Mid Element can be the last 2nd (odd) and last  
        // element of half of array
        Node* Mid=Get_Middle(Head);
        Node* Temp=Mid->next;
        Mid->next=Reverse(Temp);
        
        Node* A1=Head;
        Node* A2=Mid->next;// To check we will assign second head to next of mid
        
        while(A2!=NULL)
        {
            if(A1->data!=A2->data)
            {
                return 0;
            }
            A1=A1->next;
            A2=A2->next;
        }
        return 1;
    }
};