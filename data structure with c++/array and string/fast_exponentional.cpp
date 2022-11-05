#include<iostream>

using namespace std;

long long int power(int a,int n)
{
    long long int res=1;
    long long int m=1e9+7;
    while(n>0)
    {
        if(n&1)
        {
            res= (res * a%m)%m;
        }
        a= (a%m*a%m)%m; // property of aM *bM =(a*b)M 
                        //where M is 1e9+7
        n=n>>1;
    }
    return res;
}

int main()
{
    int a=3;
    cout<<"Result will be "<<power(a,500000);

    return 0;
}