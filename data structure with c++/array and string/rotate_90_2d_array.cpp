#include <iostream>

using namespace std;

int main()
{
    int arr[3][3];
    int row = 3, col = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    //Clock wise rotate;
 /*    for (int i = 0; i < col / 2; i++)
    {
        for (int j = 0; j < row; j++)
        {
            swap(arr[j][i], arr[j][col - i - 1]);
        }
    }
    cout << endl; */
    //Anti clock wise rotate;
    for (int i = 0; i < row / 2; i++)
    {
        for (int j = 0; j < row; j++)
        {
            swap(arr[i][j], arr[row-i-1][j]);
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}