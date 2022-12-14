#include<IOSTREAM>
#include<SET>
#include<STACK>

using namespace std;

template <class Type>

#define T template <class Type>
class Queue
{
    Type *Arr,F,B,Size;
    public:
    Queue(Type Size)
    {
        this->Size=Size;
        Arr=new Type[Size];
        F=0;
        B=0;
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
    // stack<set<int>> F;
    // set<int> P={1,2,3,4,5,6,7,8,8};
    // F.push(P);
    // P=F.top();
    // for(auto i : P)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;


    Queue <int> A(4);
    cout<<A.Empty()<<endl;
    cout<<A.Full()<<endl;
    A.Push(10);
    A.Push(20);
    // A.Pop();
    A.Push(30);
    A.Push(40);
    // A.Pop();
    // A.Pop();
    // A.Pop();
    // A.Push(50);

    // cout<<A.Pop()<<endl;
    cout<<A.Empty()<<endl;
    cout<<A.Full()<<endl;
    cout<<A.Length()<<endl;

    return 0;
}

T int Queue<Type> :: Length(void)
{
    return B-F;
}

T void Queue<Type> :: Push(Type Data)
{
    if(Full())
    {
        cout<<"You cann't push new element queue is full !! "<<endl;
    }
    else
    {
        Arr[B++]=Data;
        cout<<"Push done "<<endl;
    }
}

T bool Queue<Type> :: Full(void)
{
    if(B==Size)
    {
        return true;
    }
    return false;
}

T bool Queue<Type> :: Empty(void)
{
    if(F==B)
    {
        return true;
    }
    return false;
}

T Type Queue<Type> :: Front(void)
{
    if(Empty())
    {
        return -1;
    }

    else
    {
        return Arr[F];
    }
}

T Type Queue<Type> :: Back(void)
{
    if(Empty())
    {
        return -1;
    }

    else
    {
        return Arr[B];
    }
}

T Type Queue <Type> :: Pop(void) // You have to specify the data type of class too;
{
    if(Empty())
    {
        return -1;
    }
    else
    {
        int Val=Arr[F];
        Arr[F++]=-1;
        if(F==B)
        {
            F=0,B=0;
        }
        return Val;
    }
}