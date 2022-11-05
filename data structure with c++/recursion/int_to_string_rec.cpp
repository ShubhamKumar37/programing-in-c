#include<iostream>
// #include<map>
#include<string>

using namespace std;

void print_num_to_str(int n,string a[])
{
    if(n==0)
    {
        return ;
    }

    int ans=n%10;
    n/=10;
    print_num_to_str(n,a);

    cout<<a[ans]<<" ";
}

int main()
{
    int n=1234567890;
    string arr[11]={
    "Zero","One",
    "Two","Three",
    "Four","Five",
    "Six","Seven",
    "Eight","Nine"};


    print_num_to_str(n,arr);

    return 0;
}