#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[3][4];
    int row = 3, col = 4;
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
    int sr = 0, sc = 0, er = row - 1, ec = col - 1;
    int c = 0;
    int total = row * col;
    vector<int> a;
    while (c < total)
    {
        for (int i = sc; c < total && i <= ec; i++)
        {
            a.push_back(arr[sr][i]);
            c++;
        }
        sr++;
        for (int i = sr; c < total && i <= er; i++)
        {
            a.push_back(arr[i][ec]);
            c++;
        }
        ec--;
        for (int i = ec; c < total && i >= sc; i--)
        {
            a.push_back(arr[er][i]);
            c++;
        }
        er--;
        for (int i = er; c < total && i >= sr; i--)
        {
            a.push_back(arr[i][sc]);
            c++;
        }
        sc++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}