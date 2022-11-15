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
        int Val = this->Data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << "Memory is free for value = " << Val << endl;
    }
};

void Print_List(Node *&Head);
void Push_Front(Node *&Head, Node *&Tail, int Data);
void Push_Middle(Node *&Head, Node *&Tail, int Data, int Ind);
void Push_Back(Node *&Head, Node *&Tail, int Data);
void Delete_Ele(Node *&Head, Node *&Tail, int Ind);

// int main()
// {
//     Node *A = new Node(50);
//     Node *Head = A;
//     Node *Tail = A;

//     Push_Front(Head, Tail, 40);
//     Push_Front(Head, Tail, 20);

//     Push_Back(Head, Tail, 60);
//     Push_Back(Head, Tail, 80);

//     Push_Middle(Head, Tail, 10, 1);
//     Push_Middle(Head, Tail, 15, 2);
//     Push_Middle(Head, Tail, 100, 8);

//     Print_List(Head);

//     Delete_Ele(Head, Tail, 1);
//     Print_List(Head);
//     Delete_Ele(Head, Tail, 2);
//     Delete_Ele(Head, Tail, 6);
//     Delete_Ele(Head, Tail, 4);

//     Print_List(Head);

//     cout << Head->Data << " " << Tail->Data << endl;

//     return 0;
// }

void Delete_Ele(Node *&Head, Node *&Tail, int Ind)
{
    if (Ind == 1)
    {
        Node *Temp = Head;
        if (Temp->next == NULL)
        {
            delete Temp;
            return;
        }
        Head = Temp->next;
        Temp->next = NULL;
        delete Temp;
        return;
    }

    int C = 1;
    Node *Temp = Head;
    Node *Prev_Node = NULL;
    while (C < Ind)
    {
        Prev_Node = Temp;
        Temp = Temp->next;
        C++;
    }

    if (Temp->next == NULL)
    {
        Prev_Node->next = NULL;
        Tail = Prev_Node;
        Temp->next = NULL;
        delete Temp;
        return;
    }

    Prev_Node->next = Temp->next;
    Temp->next = NULL;
    delete Temp;
}

void Print_List(Node *&Head)
{
    if (Head == NULL)
    {
        cout << "List is empty !!!!!!" << endl;
        return;
    }
    Node *Temp = Head;
    int Length = 0;
    while (Temp != NULL)
    {
        cout << Temp->Data << " ";
        Temp = Temp->next;
        Length++;
    }
    cout << endl
         << "Length of the list is " << Length << endl;
}

void Push_Front(Node *&Head, Node *&Tail, int Data)
{
    if (Head == NULL)
    {
        Node *Temp = new Node(Data);
        Head = Temp;
        Tail = Temp;
    }
    else
    {
        Node *Temp = new Node(Data);
        Temp->next = Head;
        Head = Temp;
    }
}
void Push_Back(Node *&Head, Node *&Tail, int Data)
{
    if (Tail == NULL)
    {
        Node *Temp = new Node(Data);
        Head = Temp;
        Tail = Temp;
    }
    else
    {
        Node *Temp = new Node(Data);
        Tail->next = Temp;
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

    int C = 1;
    Node *Temp = Head;
    while (C < Ind - 1)
    {
        Temp = Temp->next;
        C++;
    }
    if (Temp->next == NULL)
    {
        Push_Back(Head, Tail, Data);
        return;
    }
    Node *New_Node = new Node(Data);
    New_Node->next = Temp->next;
    Temp->next = New_Node;
}