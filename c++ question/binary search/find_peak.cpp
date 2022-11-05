#include <iostream>

using namespace std;

int peak(int arr[], int n)
{
    int s = 0, e = n - 1, mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] <= arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return arr[mid];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << "Peak element is " << peak(arr, n) << endl;
    return 0;
}