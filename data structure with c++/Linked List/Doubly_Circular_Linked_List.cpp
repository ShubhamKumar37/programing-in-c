#include <iostream>

using namespace std;

class Node
{
public:
    int Data;
    Node *next;
    Node *prev;
    Node(int Data)
    {
        this->Data = Data;
        this->next = this;
        this->prev = this;
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
        cout << "Memory is free for value = " << Val << endl;
    }
};

void Insertion(Node *&Tail, int Ele, int Data);
void Print_List(Node *&Tail);
void Deletion(Node *&Tail, int Ele);

int main()
{
    Node *A = new Node(50);
    Node *Tail = A;

    cout << Tail->Data << endl;
    Insertion(Tail, 50, 60);
    // Insertion(Tail,50,55);

    Print_List(Tail);

    // Deletion(Tail,55);
    Deletion(Tail, 60);

    Print_List(Tail);

    cout << Tail->Data << endl;
    return 0;
}

void Deletion(Node *&Tail, int Ele)
{
    if (Tail == NULL)
    {
        cout << "List is empty you cann't delete element!!!" << endl;
    }
    else
    {
        Node *Prev_Node = Tail;
        Node *Curr = Prev_Node->next;
        while (Curr->Data != Ele)
        {
            Prev_Node = Curr;
            Curr = Curr->next;
        }
        if (Prev_Node == Curr)
        {
            Tail == NULL;
        }
        else if (Curr == Tail)
        {
            Tail = Prev_Node;
        }
        Prev_Node->next = Curr->next;
        Curr->next->prev = Prev_Node;
        delete Curr;
    }
}

void Print_List(Node *&Tail)
{
    if (Tail == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        Node *Temp = Tail;
        do
        {
            cout << Temp->Data << " ";
            Temp = Temp->next;
        } while (Temp != Tail);
        cout << endl;
    }
}

void Insertion(Node *&Tail, int Ele, int Data)
{
    if (Tail == NULL)
    {
        Node *Temp = new Node(Data);
        Temp->next = Temp;
        Temp->prev = Temp;
        Tail = Temp;
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
        Temp->next->prev = New_Node;
        New_Node->prev = Temp;
        Temp->next = New_Node;
        // cout<<"Done"<<endl;
    }
}
