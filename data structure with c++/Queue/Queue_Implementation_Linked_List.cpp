#include <IOSTREAM>

using namespace std;

template <class Type>
#define T template <class Type = int>

class Node
{
public:
    Type data;
    Node<Type> *next;
    Node() {}
    Node(Type data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int Val = this->data;
        cout << "Deleted node have data = " << Val << endl;
    }
};
T void Insert(Node<Type> *&Head, Type d);

T class Queue : public Node<Type>
{
    Type F = 0, B = 0;
    Node<Type> *Head = NULL;

public:
    Queue() {}
    Queue(int data)
    {
        Insert(Head, data);
    }

    Node<Type> *Get_Head(void) { return Head; }
    Type Pop(void);
    Type Back(void);
    Type Front(void);
    int Length(void);
    bool Empty(void);
    bool Full(void);
    void Push(Type Data);
};

int main()
{
    Queue<int> A(50);
    Node<int> *Head = A.Get_Head();

    cout << Head->data << endl;
    return 0;
}
T void Insert(Node<Type> *&Head, Type d)
{
    Node<Type> *Temp = new Node<Type>(d);
    if (Head == NULL)
    {
        Head = Temp;
        cout << "Done" << endl;
        return;
    }
    Temp->next = Head;
    Head = Temp;
}

T Type Delete(Node<Type> *Head)
{
    if (Head == NULL || Head->next == NULL)
    {
        return Head == NULL ? NULL : Head->data;
    }

    Node<Type> *Temp = Head;
    while (Temp->next->next != NULL)
    {
        Temp = Temp->next;
    }
    Node<Type> *T_Delete = Temp->next;
    Temp->next = NULL;
    return T_Delete->data;
}
