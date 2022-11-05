#include <iostream>

using namespace std;

template <class a1,class a2=int>

void selection_sort(a1 arr[], a2 n)
{
    for (int i = 0; i < n - 1; i++)
    {
        a2 minid = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minid] > arr[j])
            {
                minid = j;
            }
        }
        swap(arr[minid], arr[i]);
    }
}

int main()
{
    float arr[] = {4.2, 3.12, 5.12, 2.54, 43.23, 5.00, 6.12};
    int n = sizeof(arr) / sizeof(float);
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}