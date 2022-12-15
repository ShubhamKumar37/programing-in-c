#include <IOSTREAM>

using namespace std;
// template <typename Type> class Queue;
template <typename Type>
class Node
{
public:
    Type data;
    Node<Type> *next = NULL;
    template <typename T>
    friend class Queue;

    // ~Node()
    // {
    //     int Val = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "Deleted node have data = " << Val << endl;
    // }
};

template <typename Type>
class Queue
{
public:
    Node<Type> *Head = NULL;
    Node<Type> *Tail = NULL;

    Queue() {}
    Queue(Type data)
    {
        Node<Type> *Temp = new Node<Type>[1];
        Temp->data = data;
        Head = Temp;
        Tail = Temp;
        cout << "Done" << endl;
    }

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
    int *Pre = NULL;
    Queue<int> A(50);
    A.Push(30);
    // A.Push(10);
    // A.Pop();
    // A.Pop();
    A.Pop();
    A.Pop();
    A.Pop();

    // cout<<A.Head->data<<endl;
    // cout<<A.Tail->data<<endl;
    // cout<<A.Head->next->next<<endl;

    return 0;
}

template <typename Type>
void Queue<Type>::Push(Type Data)
{
    Node<Type> *Temp = new Node<Type>[1];
    Temp->data = Data;
    cout << "Done2" << endl;
    if (Head == NULL)
    {
        Head = Temp;
        Tail = Temp;
        return;
    }
    else
    {
        Tail->next = Temp;
        Tail = Temp;
    }
}

template <typename Type>
Type Queue<Type>::Pop(void)
{
    if (Head == NULL || Tail == NULL)
    {
        cout << "You cann't pop as the queue is empty " << endl;
        return -1;
    }
    else
    {
        Node<Type> *Temp = Head;
        Type Ans = Temp->data;
        if (Temp->next == NULL)
        {
            Head = NULL;
            Tail = NULL;
            cout << "Before1" << endl;
            Temp->next = NULL;
            delete Temp;
            cout << "After1" << endl;
            return Ans;
        }

        Head = Head->next;

        Temp->next = NULL;
        cout << "Before" << endl;
        delete Temp;
        cout << "After" << endl;
        return Ans;
    }
}
