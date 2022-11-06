#include <iostream>

using namespace std;


class Node
{
public:
    int Data;
    Node *next;

    Node(int Data)
    {
        this->Data = Data;
        this->next = NULL;
    }
    ~Node()
    {
        int val=this->Data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Delete done"<<endl;
    }
};

void Print_List(Node *&Head)

{
    Node *Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->Data << " ";
        Temp = Temp->next;
    }
}

void Print_List_Rec(Node *&Head)
{
    Node *Temp = Head;
    if (Temp == NULL)
    {
        return;
    }
    cout << Temp->Data << endl;
    Print_List_Rec(Temp->next);
}

void Push_Back(Node *&Tail, int Data)
{
    Node *Temp = new Node(Data);
    Tail->next = Temp;
    Tail = Temp;
}

void Push_Front(Node *&Head, int Data)
{
    Node *Temp = new Node(Data);
    Temp->next = Head;
    Head = Temp;
}

int Length(Node* &Head)
{
    Node *Temp = Head;
    int Len = 1;
    while (Temp->next != NULL)
    {
        Temp = Temp->next;
        Len++;
    }

    return Len;
}

void Push_Middle(Node *&Head, Node *&Tail, int Data, int Ind)
{
    if (Ind == 1)
    {
        Push_Front(Head, Data);
        return;
    }
    Node *Temp = new Node(Data);
    Node *T = Head;
    int C = 1;
    while (C < Ind)
    {
        T = T->next;
        C++;
    }
    if (T->next == NULL)
    {
        Push_Back(Tail, Data);
        return;
    }
    Temp->next = T->next;
    T->next = Temp;
}

void Delete_Ele(int Ind,Node *&Head)
{
    if(Ind==1)
    {
        Node *Curr = Head;
        Head = Head->next;
        Curr->next=NULL;
        delete Curr;
    }
    else
    {
        Node *Prev=NULL;
        Node *Temp=Head;
        int Count=1;
        while(Count<Ind)
        {
            Prev=Temp;
            Temp=Temp->next;
            Count++;
        }

        Prev->next=Temp->next;
        Temp->next=NULL;
        delete Temp;

    }
}

int main()
{
    Node *A1 = new Node(20);
    Node *Head = A1;
    Node *Tail = A1;

    Print_List(Head);
    cout << endl;
    Push_Front(Head, 30);
    Print_List(Head);
    cout << endl;
    Push_Front(Head, 40);
    Print_List(Head);
    cout << endl;
    Push_Front(Head, 50);

    Print_List(Head);
    cout << endl;

    cout << "Adding element at the end of the linked list " << endl;
    Push_Back(Tail, 10);

    Push_Back(Tail, 0);

    Push_Back(Tail, -10);

    Push_Middle(Head, Tail, 100, 7);
    Push_Middle(Head, Tail, 45, 1);

    Print_List(Head);
    cout << endl;

    cout << "Length of the linked list is " << Length(Head) << endl;


    // Print_List(Head);

    Delete_Ele(1,Head);
    Print_List(Head);
    cout<<endl;
    cout << "Length of the linked list is " << Length(Head) << endl;
    Delete_Ele(1,Head);
    Print_List(Head);

    // cout << Head->Data<<endl;
    cout<<endl;

    cout << "Length of the linked list is " << Length(Head) << endl;
    return 0;
}