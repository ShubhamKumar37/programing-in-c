#include <iostream>

using namespace std;

template <class Type>
class Node
{
public:
    Type Data;
    Node *next;

    Node(Type Data)
    {
        this->Data = Data;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->Data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Delete done" << endl;
    }
};

void Print_List(Node<int> *&Head)

{
    Node<int> *Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->Data << " ";
        Temp = Temp->next;
    }
}

void Print_List_Rec(Node<int> *&Head)
{
    Node<int> *Temp = Head;
    if (Temp == NULL)
    {
        return;
    }
    cout << Temp->Data << endl;
    Print_List_Rec(Temp->next);
}

void Push_Back(Node<int> *&Tail, int Data)
{
    Node<int> *Temp = new Node(Data);
    Tail->next = Temp;
    Tail = Temp;
}

void Push_Front(Node<int> *&Head, int Data)
{
    Node<int> *Temp = new Node(Data);
    Temp->next = Head;
    Head = Temp;
}

int Length(Node<int> *&Head)
{
    Node<int> *Temp = Head;
    int Len = 1;
    while (Temp->next != NULL)
    {
        Temp = Temp->next;
        Len++;
    }

    return Len;
}

void Push_Middle(Node<int> *&Head, Node<int> *&Tail, int Data, int Ind)
{
    if (Ind == 0)
    {
        Push_Front(Head, Data);
        return;
    }
    Node<int> *Temp = new Node(Data);
    Node<int> *T = Head;
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

void Delete_Ele(Node<int> *&Head, int Ind)
{
    if (Ind == 0)
    {
        Node<int> *Curr = Head;
        Head = Head->next;

        Curr->next = NULL;
        delete Curr;
    }
}

int main()
{
    Node<int> *A1 = new Node(20);
    Node<int> *Head = A1;
    Node<int> *Tail = A1;

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

    Print_List(Head);
    cout << endl;

    cout << "Length of the linked list is " << Length(Head) << endl;

    Delete_Ele(Head, 0);

    Print_List(Head);
    // cout << Head->Data<<endl;

    return 0;
}