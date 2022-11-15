/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/
void Insert(Node* &Tail,Node* Curr)
{
//     Node* New_Node=new Node(Val);
    Tail->next=Curr;
    Tail=Curr;
}

Node* sortList(Node *Head)
{
    // Write your code here.
    
    Node* Zeros=new Node(-1);
    Node* Z_Tail=Zeros;
    Node* Ones=new Node(-1);
    Node* O_Tail=Ones;
    Node* Twos=new Node(-1);
    Node* T_Tail=Twos;
    Node* Temp=Head;
    
    while(Temp!=NULL)
    {
        int Val=Temp->data;
        if(Val==0)
        {
            Insert(Z_Tail,Temp);
        }
        else if(Val==1)
        {
            Insert(O_Tail,Temp);
        }
        else
        {
            Insert(T_Tail,Temp);
        }
        Temp=Temp->next;
    }
    
    // Merge List
    
    if(Ones->next!=NULL)
    {
        Z_Tail->next=Ones->next;
    }
    else
    {
        Z_Tail->next=Twos->next;
    }
    
    O_Tail->next=Twos->next;
    T_Tail->next=NULL;
    
    Head=Zeros->next;    
    delete Ones;
    delete Zeros;
    delete Twos;
    

    return Head;
}
