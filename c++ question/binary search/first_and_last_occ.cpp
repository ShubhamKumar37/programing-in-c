#include <iostream>

using namespace std;

int first_occ(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int last_occ(int arr[], int n, int k)
{
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    int fir = first_occ(arr, n, 8);
    int last = last_occ(arr, n, 8);
    cout << "First and last occurance of " << 3 << " is " << fir << " and " << last << endl;
    return 0;
}