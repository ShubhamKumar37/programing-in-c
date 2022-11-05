#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void find_first_negeative(int arr[], int n, int k)
{
    queue<int> a;
    vector<int> ans;
    for (int i = 0; i < k - 1; i++)
    {
        if (arr[i] < 0)
        {
            a.push(arr[i]);
        }
    }
    for (int i = k - 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            a.push(arr[i]);
        }
        if (!a.empty())
        {
            ans.push_back(a.front());
            if (a.front() == arr[i - k + 1])
            {
                a.pop();
            }
        }
        else
        {
            ans.push_back(0);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr[] = {-8, 2, -3, -6, 10};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;
    find_first_negeative(arr, n, k);
    return 0;
}