#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    int Size = -1;

public:
    Node *Tail = NULL;
    Stack(int data)
    {
        Node *New_Node = new Node(data);
        Tail = New_Node;
        Size++;
    }

    int Length();
    Node *Pop(Node *&Tail);
    int Peek();
    bool is_Empty();
    void Push(int data, Node *&Tail);
};

int main()
{
    Stack A(5);
    // Node* Temp=A.Tail;
    // A.Push(10,A.Tail);
    // A.Push(20,A.Tail);
    A.Pop(A.Tail);
    cout << A.Peek() << endl;
    cout << A.Length() << endl;
    cout << A.is_Empty() << endl;

    // cout<<Tail->data<<endl;

    return 0;
}

void Stack::Push(int data, Node *&Tail)
{
    if (Tail == NULL)
    {
        Tail = new Node(data);
        return;
    }
    Node *New_Node = new Node(data);
    New_Node->next = Tail;
    Tail = New_Node;
    Size++;
}

bool Stack::is_Empty(void)
{
    if (Size == -1)
    {
        return 1;
    }
    return 0;
}

int Stack::Length(void)
{
    if (Size == -1)
    {
        cout << "Stack has no element ";
        return -1;
    }
    return Size + 1;
}

int Stack::Peek(void)
{
    return Size != -1 ? Tail->data : -1;
}

Node *Stack::Pop(Node *&Tail)
{
    if (Size == -1)
    {
        cout << "Stack is empty" << endl;
        return NULL;
    }

    Node *T_Delete = Tail;
    if (Tail->next != NULL)
    {
        Tail = Tail->next;
    }
    free(T_Delete);
    Size--;
    return Tail ? Tail : NULL;
}
