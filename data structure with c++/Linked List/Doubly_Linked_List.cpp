#include <iostream>

using namespace std;

class Node
{
public:
    int Data;
    Node *prev;
    Node *next;

    Node(int Data)
    {
        this->Data = Data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int Val = this->Data;
        if (this->next != NULL)
        {
            this->next = NULL;
            this->prev = NULL;
            delete next;
            delete prev;
        }
        cout << "Memory is for value = " << Val << endl;
    }
};

void Print_List(Node *&Head);
void Push_Front(Node *&Head, Node *&Tail, int Data);
void Push_Back(Node *&Tail, Node *&Head, int Data);
void Push_Middle(Node *&Head, Node *&Tail, int Data, int Ind);
void Delete_Ele(Node *&Head, Node *&Tail, int Ind);

// int main()
// {
//     // Node *A = new Node(5);
//     Node *Head = NULL;
//     Node *Tail = NULL;
//     // Node *A = new Node(5);
//     // Node *Head = A;
//     // Node *Tail = A;

//     // Print_List(Head);

//     Push_Front(Head, Tail, 4);
//     Push_Front(Head, Tail, 3);
//     Push_Front(Head, Tail, 2);

//     Push_Back(Tail, Head, 6);
//     Push_Back(Tail, Head, 7);

//     Push_Middle(Head, Tail, 100, 2);
//     Push_Middle(Head, Tail, 1, 1);
//     Push_Middle(Head, Tail, 11, 8);
//     // Print_List(Head);

//     // Delete_Ele(Head, Tail, 1);
//     // Delete_Ele(Head, Tail, 7);
//     // Delete_Ele(Head, Tail, 2);
//     // Delete_Ele(Head, Tail, 4);

//     Print_List(Head);

//     cout << Head->Data << endl;
//     cout << Tail->Data << endl;

//     return 0;
// }

void Delete_Ele(Node *&Head, Node *&Tail, int Ind)
{
    if (Ind == 1)
    {
        Node *Temp = Head;
        Head = Temp->next;
        Head->prev = NULL;
        Temp->next = NULL;
        delete Temp;
        return;
    }

    int C = 1;
    Node *T = Head;
    Node *Prev_Node = NULL;
    while (C < Ind)
    {
        Prev_Node = T;
        T = T->next;
        C++;
    }

    if (T->next == NULL)
    {
        Prev_Node->next = NULL;
        Tail = Prev_Node;
        T->prev = NULL;
        delete T;
        return;
    }
    Prev_Node->next = T->next;
    T->next->prev = Prev_Node;
    T->next = NULL;
    T->prev = NULL;
    delete T;
}

void Print_List(Node *&Head)
{
    Node *Temp = Head;
    int Length = 0;
    while (Temp != NULL)
    {
        cout << Temp->Data << " ";
        Temp = Temp->next;
        Length++;
    }
    cout << endl;
    cout << "Length of the list is " << Length << endl;
}

void Push_Front(Node *&Head, Node *&Tail, int Data)
{
    if (Head == NULL)
    {
        Node *Temp = new Node(Data);
        Head = Temp;
        Tail = Temp;
        return;
    }

    Node *Temp = new Node(Data);
    Temp->next = Head;
    Head->prev = Temp->next;
    Head = Temp;
}

void Push_Back(Node *&Tail, Node *&Head, int Data)
{
    if (Tail == NULL)
    {
        Node *Temp = new Node(Data);
        Tail = Temp;
        Head = Temp;
    }
    else
    {
        Node *Temp = new Node(Data);

        Tail->next = Temp;
        Temp->prev = Tail;
        Tail = Temp;
    }
}

void Push_Middle(Node *&Head, Node *&Tail, int Data, int Ind)
{
    if (Ind == 1)
    {
        Push_Front(Head, Tail, Data);
        return;
    }
    Node *Temp = Head;
    int C = 1;
    while (C < Ind - 1)
    {
        Temp = Temp->next;
        C++;
    }
    if (Temp->next == NULL)
    {
        Push_Back(Tail, Head, Data);
        return;
    }

    Node *New_Node = new Node(Data);

    New_Node->next = Temp->next;
    Temp->next->prev = New_Node;
    New_Node->prev = Temp;
    Temp->next=New_Node;
}