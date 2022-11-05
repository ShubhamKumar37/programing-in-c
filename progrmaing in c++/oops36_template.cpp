#include<iostream>

using namespace std;

template <class a>

class vec
{
    a *arr;
    int n;
    public:
    vec(int n)
    {
        this->n=n;
        arr=new a[n];
    }
    void input(void)
    {
        for(int i=0;i<n;i++)
        {
            cout<<"Enter the element of index "<<i<<" = ";
            cin>>arr[i];
        }
    }
    void sum(vec &b)
    {
        a sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=this->arr[i] * b.arr[i];
        }
        cout<<"The multiplication and sum of both array is "<<sum<<endl;
    }
};

int main()
{
    vec <float> a1(3),a2(3);
    a1.input();
    a2.input();
    a1.sum(a2);

    return 0;
}