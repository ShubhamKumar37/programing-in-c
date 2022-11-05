#include <iostream>

using namespace std;

void largest_sum(int arr[], int n)
{
    int temp = 0;
    int lar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        temp = temp + arr[i];
        if (temp < 0)
        {
            temp = 0;
        }
        lar = max(lar, temp);
    }
    cout << "Largest sum in the subarray is " << lar << endl;
}

int main()
{
    int arr[] = {-1, -2, -2};
    int n = sizeof(arr) / sizeof(int);
    largest_sum(arr, n);
    return 0;
}