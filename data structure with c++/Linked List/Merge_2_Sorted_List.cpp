

/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
//Function to merge two sorted linked list.

Node* Merge(Node* Head1,Node* Head2)
{
    
    if(Head1->next==NULL)
    {
        Head1->next=Head2;
        return Head1;
    }
    
    Node* Curr1=Head1;
    Node* Curr2=Head2;
    Node* Forward1=Head1->next;
    Node* Forward2=Head2->next;
    
    while(Forward1 != NULL && Curr2!=NULL)
    {
        if(Curr1->data <= Curr2->data && Curr2->data <= Forward1->data)
        {
            // Adding the elements
            Curr1->next=Curr2;
            Forward2=Curr2->next;
            Curr2->next=Forward1;
            
            // Updating pointers
            Curr1=Curr2;
            Curr2=Forward2;
        }
        else
        {
            Curr1=Curr1->next;
            Forward1=Forward1->next;
            if(Forward1==NULL)
            {
                Curr1->next=Curr2;
                return Head1;
            }
        }
    }
    return Head1;
    
}

Node* sortedMerge(Node* Head1, Node* Head2)  
{  
    // code here
    if(Head1==NULL)
    {
        return Head2;
    }
    if(Head2==NULL)
    {
        return Head1;
    }
    
    if(Head1->data<Head2->data)
    {
        return Merge(Head1,Head2);
    }
    
    else
    {
        return Merge(Head2,Head1);
    }
    
}  