#include<iostream>

using namespace std;

int max_sum(int arr[],int n,int k)
{
    int i=0,j=0;
    int sum=0;
    int max_s=INT_MIN;
    while(j<n)
    {
        sum+=arr[j];
        if(j<k-1)
        {
            j++;
        }
        else
        {
            max_s=max(sum,max_s);
            sum-=arr[i++];
            j++;
        }
    }
    return max_s;
}

int main()
{
    int arr[]={3,34,56,234,5};
    int n=sizeof(arr)/sizeof(int);
    int k=1;
    cout<<"Maximum sum subarray of 3 is "<<max_sum(arr,n,k)<<endl;

    return 0;
}