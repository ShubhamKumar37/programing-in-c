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

Node* sortList(Node *Head)
{
    // Write your code here.
    int C_0=0;
    int C_1=0;
    int C_2=0;
    Node* Temp=Head;
    
    while(Temp!=NULL)
    {
        if(Temp->data==0)
        {
            C_0++;
        }
        else if(Temp->data==1)
        {
            C_1++;
        }
        else
        {
            C_2++;
        }
        Temp=Temp->next;
    }
    Temp=Head;
    while(Temp!=NULL)
    {
        if(C_0!=0)
        {
            Temp->data=0;
            C_0--;
        }
        else if(C_1!=0)
        {
            Temp->data=1;
            C_1--;
        }
        else
        {
            Temp->data=2;
            C_2--;
        }
        Temp=Temp->next;
    }
    
    return Head;

}
