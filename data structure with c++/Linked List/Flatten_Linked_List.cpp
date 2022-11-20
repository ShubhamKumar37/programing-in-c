/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */

Node* Merge_List(Node* Temp,Node* Forward)
{
    if(Temp==NULL)
    {
        return Forward;
    }
    if(Forward==NULL)
    {
        return Temp;
    }
    
    if(Temp->bottom==NULL)
    {
        Temp->bottom=Forward;
        return Temp;
    }
    
    Node* Curr1=Temp;
    Node* Curr2=Forward;
    Node* Next1=Temp->bottom;
    Node* Next2=Forward->bottom;
    
    while(Next1!=NULL && Curr2!=NULL)
    {
        if(Curr1->data<=Curr2->data && Curr2->data<=Next1->data)
        {
            
        }
        else
        {
            Curr1=Curr1->bottom;
            Next1=Next1->bottom;
            if(Next1==NULL)
            {
                Curr1->bottom=Curr2;
                return Temp;
            }
        }
    }
    return Temp;
    
}

Node* Flat_List(Node* Head)
{
    if(Head->next==NULL)
    {
        return Head;
    }
    
    Node* Temp=Head;
    Node* Forward=Head->next;
    Head->next=NULL;
    
    Node* List2=Flat_List(Forward);
    
    if(Temp->data<List2->data)
    {
        return Merge_List(Temp,List2);
    }
    return Merge_List(List2,Temp);
    
}
    
    
Node *flatten(Node *Root)
{
   // Your code here
   if(Root==NULL)
   {
       return NULL;
   }
   
   return Flat_List(Root);
}

