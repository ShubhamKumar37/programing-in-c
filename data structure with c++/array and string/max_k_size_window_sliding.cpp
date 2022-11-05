#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void max_window(int arr[], int n, int k)
{
    int i = 0, j = 0;
    vector<int> ans;
    queue<int> a;
    while (j < n)
    {
        while (a.size() > 0 && a.back() < arr[j])
        {
            a.pop();
        }
        a.push(arr[j]);
        if (j < k - 1)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            ans.push_back(a.front());
            if (a.front() == arr[i])
            {
                a.pop();
            }
            i++, j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 5, 3, 7, 5, 8, 3};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;

    max_window(arr, n, k);

    return 0;
}