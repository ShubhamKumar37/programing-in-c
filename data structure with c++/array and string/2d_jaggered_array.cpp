#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Enter no of rows ";
    cin >> N;
    int **arr = new int *[N];
    int *col = new int[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Enter the number of columns wants to added in row = " << i << " = ";
        cin >> col[i];
    }
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[col[i]];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << "Enter the element of index " << i << " , " << j << " = ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] col;

    return 0;
}