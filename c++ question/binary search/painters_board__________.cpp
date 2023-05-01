#include <iostream>

using namespace std;

bool distribution(int arr[], int n, int k, int mid)
{
    int pt = 1;
    int painted = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + painted <= mid)
        {
            painted += arr[i];
        }
        else
        {
            pt++;
            if (pt > k || arr[i] > mid)
            {
                return false;
            }
            painted = arr[i];
        }
    }
    return true;
}

int time_req(int arr[], int n, int k)
{
    int s, e, mid, ans;
    for (int i = 0; i < n; i++)
    {
        e += arr[i];
    }
    s = 0;
    // e=sum;
    mid = (s + e) >> 1;
    ans = -1;
    while (s <= e)
    {
        if (distribution(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) >> 1;
    }
    return ans;
}

int main()
{
    int arr[] = {6, 3, 2, 8, 7, 5};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;
    cout << "Minimum hours required are " << time_req(arr, n, k) << endl;

    return 0;
}