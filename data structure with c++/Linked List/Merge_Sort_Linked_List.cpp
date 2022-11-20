class Solution{
  private:
    Node* Get_Middle(Node* Head)
    {
        // if(Head==NULL)
        // {
        //     return NULL;
        // }
        
        Node* Slow=Head;
        Node* Fast=Head->next;
        
        while(Fast!=NULL && Fast->next==NULL)
        {
            Fast=Fast->next->next;
            Slow=Slow->next;
        }
        
        return Slow;
    }
    
    Node* Merge_List(Node* Left,Node* Right)
    {
        if(Left==NULL)
        {
            return Right;
        }
        if(Right==NULL)
        {
            return Left;
        }
        
        Node* Temp=new Node(-1);
        Node* Ans=Temp;
        
        while(Left!=NULL && Right!=NULL)
        {
            if(Left->data<=Right->data)
            {
                Temp->next=Left;
                Temp=Left;
                Left=Left->next;
            }
            else
            {
                Temp->next=Right;
                Temp=Right;
                Right=Right->next;
            }
        }
        
        while(Left!=NULL)
        {
            Temp->next=Left;
            Temp=Left;
            Left=Left->next;
        }
        while(Right!=NULL)
        {
            Temp->next=Right;
            Temp=Right;
            Right=Right->next;
        }
        
        Node* T_Del=Ans;
        
        Ans=Ans->next;
        T_Del->next=NULL;
        free(T_Del);
        
        return Ans;
    }
    
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* Head) {
        // your code here
        if(Head==NULL || Head->next==NULL)
        {
            return Head;
        }
        
        Node* Mid=Get_Middle(Head);
        
        Node* Left=Head;
        Node* Right=Mid->next;
        Mid->next=NULL;
        
        Left=mergeSort(Left);
        Right=mergeSort(Right);
        
        return Merge_List(Left,Right);
    }
};