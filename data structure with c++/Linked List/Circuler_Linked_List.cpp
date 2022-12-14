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
        this->next = this;
    }

    ~Node()
    {
        int Val = this->Data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << "Memory is free for value " << Val << endl;
    }
};

void Insertion_Ele(Node *&Tail, int Ele, int Data);
void Print_List(Node *&Tail);
void Delete_Ele(Node *&Tail, int Ele);

// int main()
// {
//     Node *A = new Node(40);
//     Node *Tail = A;
//     // Node *Tail = NULL;

//     // Print_List(Tail);

//     Insertion_Ele(Tail, 40, 50);
//     Node *Temp = Tail;
//     // Print_List(Tail);
//     // Insertion_Ele(Tail, 40, 80);
//     // Print_List(Tail);
//     // Insertion_Ele(Tail, 40, 60);
//     // Print_List(Tail);
//     // Insertion_Ele(Tail, 40, 100);
//     Print_List(Tail);

//     Delete_Ele(Tail, 50);

//     Print_List(Tail);
//     // cout<<" "<<Tail->Data<<endl;

//     return 0;
// }

void Delete_Ele(Node *&Tail, int Ele)
{
    if (Tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    else
    {
        Node *Prev = Tail;
        Node *Temp = Prev->next;

        while (Temp->Data != Ele)
        {
            Prev = Temp;
            Temp = Temp->next;
        }

        Prev->next = Temp->next;

        if (Prev == Temp)
        {
            Tail = NULL;
        }
        else if (Temp == Tail)
        {
            Tail = Prev;
        }

        Temp->next = NULL;
        delete Temp;
    }
}

void Print_List(Node *&Tail)
{

    Node *Temp = Tail;

    if (Tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    do
    {
        cout << Tail->Data << " ";
        Tail = Tail->next;
    } while (Tail != Temp);
    cout << endl;
}

void Insertion_Ele(Node *&Tail, int Ele, int Data)
{
    if (Tail == NULL)
    {
        Node *Temp = new Node(Data);
        Tail = Temp;
        Temp->next = Temp;
    }
    else
    {
        Node *Temp = Tail;
        while (Temp->Data != Ele)
        {
            Temp = Temp->next;
        }
        Node *New_Node = new Node(Data);
        New_Node->next = Temp->next;
        Temp->next = New_Node;
    }
}