#include <iostream>

using namespace std;

void largestsum(int arr[], int n)
{
    int pre[100], i, j, lar = INT_MIN;
    pre[0] = arr[0];
    for (i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = i + 1; j < n; j++)
        {
            lar = i > 0 ? pre[j] - pre[i - 1] : pre[j];
        }
        lar = max(lar, sum);
    }
    cout << "Largest sum in the subarray is " << lar << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 5, 4, 7, 56, -34, -230000, 34};
    int n = sizeof(arr) / sizeof(int);
    largestsum(arr, n);
    return 0;
}
// https://github.com/coding-minutes/dsa-essentials-solutions-cpp/blob/master/DSA%20Essentials%20Solutions/Arrays/LargestElement.cpp