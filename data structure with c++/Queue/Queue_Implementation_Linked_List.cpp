#include <IOSTREAM>

using namespace std;
// template <typename Type> class Queue;
template <typename Type>
class Node
{
public:
    Type data;
    Node<Type> *next = NULL;
};

template <typename Type>
class Queue : public Node<Type>
{
    int S = 0;

public:
    Node<Type> *Head = NULL;
    Node<Type> *Tail = NULL;

    Queue() {}
    Queue(Type data)
    {
        S++;
        Node<Type> *Temp = new Node<Type>[1];
        Temp->data = data;
        Head = Temp;
        Tail = Temp;
    }

    Type Pop(void);
    Type Back(void);
    Type Front(void);
    int Length(void);
    bool Empty(void);
    void Push(Type Data);
};

int main()
{
    int *Pre = NULL;
    Queue<char> A('A');
    A.Push('B');
    A.Push('C');
    A.Push('D');
    // A.Push(10);
    // A.Pop();
    // A.Pop();
    // A.Pop();
    // A.Pop();
    // A.Pop();

    cout << A.Empty() << endl;
    cout << A.Length() << endl;
    cout << A.Front() << endl;
    cout << A.Back() << endl;
    cout << A.Pop() << endl;
    cout << A.Front() << endl;
    // cout<<A.Pop()<<endl;
    // cout<<A.Front()<<endl;
    // cout<<A.Head->data<<endl;
    // cout<<A.Tail->data<<endl;
    // cout<<A.Head->next->next<<endl;

    return 0;
}

template <typename Type>
bool Queue<Type>::Empty(void)
{
    if (Head == NULL)
    {
        return true;
    }
    return false;
}

template <typename Type>
int Queue<Type>::Length(void)
{
    return S;
}

template <typename Type>
Type Queue<Type>::Front(void)
{
    return Head == NULL ? -1 : Head->data;
}
template <typename Type>
Type Queue<Type>::Back(void)
{
    return Tail == NULL ? -1 : Tail->data;
}

template <typename Type>
void Queue<Type>::Push(Type Data)
{
    Node<Type> *Temp = new Node<Type>[1];
    Temp->data = Data;
    S++;

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
        S--;
        Node<Type> *Temp = Head;
        Type Ans = Temp->data;
        if (Temp->next == NULL)
        {
            Head = NULL;
            Tail = NULL;

            Temp->next = NULL;
            delete Temp;

            return Ans;
        }

        Head = Head->next;

        Temp->next = NULL;
        delete Temp;
        return Ans;
    }
}
