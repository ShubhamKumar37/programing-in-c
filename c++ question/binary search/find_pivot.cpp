#include <iostream>

using namespace std;

int pivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[0] < arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return arr[s];
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << "Pivot element is " << pivot(arr, n) << endl;

    return 0;
}

// while(s<=e)
//         {
//             long long sum=mid*(mid+1)/2;
//             if(sum==n)
//             {
//                 ans=mid;
//                 s=mid+1;
//             }
//             if(sum<n)
//             {
//                 ans=mid;
//                 s=mid+1;
//             }
//             else
//             {
//                 e=mid-1;
//             }
//             mid=(s+e)>>1;
//         }