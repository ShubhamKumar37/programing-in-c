//ONLY FOR POSITIVE NUMBER
#include<iostream>

using namespace std;

int max_sub(int arr[],int n,int k)
{
    int i=0,j=0;
    int maxn=INT_MIN;
    int sum=0;
    while(j<n)
    {
        sum+=arr[j];
        if(sum<k)
        {
            j++;
        }
        else if(sum==k)
        {
            maxn=max(maxn,j-i+1);
            cout<<maxn<<endl;
            j++;
        }
        else if(sum>k)
        {
            while(sum>=k)
            {
                sum-=arr[i++];
            }
            j++;
        }
    }
    return maxn;
}

int main()
{
    int arr[]={3,6,23,54};
    int n=sizeof(arr)/sizeof(int);
    int k=6;

    cout<<"Maximum length of subarray having sum "<<k<<" is "<<max_sub(arr,n,k)<<endl;
    return 0;
}