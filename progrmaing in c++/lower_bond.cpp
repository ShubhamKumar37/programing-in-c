#include <iostream>

using namespace std;

int lower_bond(int arr[], int n, int val)
{
    int i, s = 0, e = n - 1, mid, ans;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == val)
        {
            return val;
        }
        else if (arr[mid] > val)
        {
            e = mid - 1;
        }
        else
        {
            ans = arr[mid];
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9, 11, 23, 34, 45, 56};
    int n = sizeof(arr) / sizeof(int);
    cout << lower_bond(arr, n, 1000) << endl;
    return 0;
}