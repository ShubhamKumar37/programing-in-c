#include <iostream>

using namespace std;

void merge(int arr1[], int arr2[], int n1, int n2, int arr[])
{
    int i = 0, j = 0, x = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[x++] = arr1[i++];
        }
        else
        {
            arr[x++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        arr[x++] = arr1[i++];
    }
    while (j < n2)
    {
        arr[x++] = arr2[j++];
    }
}

void print(int arr[], int n)
{
    cout << "After merging both array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 89};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    int *arr = new int[n1 + n2];
    merge(arr1, arr2, n1, n2, arr);
    print(arr, n1 + n2);

    return 0;
}