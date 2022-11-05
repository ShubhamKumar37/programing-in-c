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
    return s;
}

int find_num(int arr[], int s1, int e1, int k)
{
    int s = s1, e = e1 - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] == k)
        {
            return mid;
            break;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << "Index of pivot element is " << pivot(arr, n) << endl;
    int index = pivot(arr, n);
    int val = 5;
    if (index < val)
    {
        cout << "Index of element " << val << " is " << find_num(arr, 0, index, val) << endl;
    }
    else
    {
        cout << "Index of element " << val << " is " << find_num(arr, index + 1, n, val) << endl;
    }
    return 0;
}