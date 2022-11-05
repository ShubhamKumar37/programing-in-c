#include<iostream>

using namespace std;

long long int square(int a)
{
    int s=0,e=a-1;
    int mid=(s+e)/2;
    long long int ans;
    while (s<=e)
    {
        long long int sq=mid*mid;
        if(sq==a)
        {
            return mid;
        }
        else if(sq<a)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

double more(int a,int p,int temp)
{
    double ans=temp;
    double f=1;
    for(int i=0;i<p;i++)
    {
        f=f/10;
        for(double j=ans;j*j<a;j+=f)
        {
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int val=50;
    cout<<"Square root of number "<<val<<" is "<<square(val)<<endl;
    int ans=square(val);
    cout<<"Square root in more precise of  number "<<val<<" is "<<more(val,2,ans)<<endl;
    return 0;
}