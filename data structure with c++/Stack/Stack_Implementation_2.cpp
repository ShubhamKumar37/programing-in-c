#include<iostream>

using namespace std;

class stack
{
    int *Arr;
    int Size;
    int Top=-1;
    public:
    stack(int Size)
    {
        this->Size=Size;
        Arr=new int[Size];
    }

    int Pop();
    int Peek();
    int Length();
    bool is_Full();
    bool is_Empty();
    void Push(int data);

};

int main()
{
    stack A(5);

    A.Push(10);
    // A.Push(20);
    // A.Push(30);
    // A.Push(40);
    A.Push(50);
    // cout<<A.Peek()<<endl;
    // A.Pop();
    // A.Pop();

    cout<<A.Length()<<endl;


    if(!A.is_Empty())
    {
        cout<<"Stack is not empty "<<endl;
    }
    else
    {
        cout<<"Stack is empty "<<endl;
    }
    return 0;
}

bool stack :: is_Full(void)
{
    if(Top==Size-1)
    {
        return 1;
    }
    return 0;
}
bool stack :: is_Empty(void)
{
    if(Top<0)
    {
        return 1;
    }
    return 0;
}

int stack :: Length(void)
{
    return Top+1;
}

int stack :: Peek(void)
{
    if(Top<0)
    {
        cout<<"Stack is empty so take -1 "<<endl;
        return -1;
    }

    return Arr[Top];
}

void stack :: Push(int data)
{
    if(Top==Size-1)
    {
        cout<<"Not possible the stack is full"<<endl;
    }
    Arr[++Top]=data;
}

int stack :: Pop(void)
{
    if(!is_Empty())
    {
        return Arr[Top--];
    }
    cout<<"Pop is not possible as the stack is empty"<<endl;
    return -1;
}

