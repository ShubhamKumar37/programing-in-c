#include <iostream>

using namespace std;

int main()
{
    int arr[3][3];
    int num[3];
    int ind = 0;
    cout << "Enter " << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        num[ind++] = sum;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << num[i] << "  ";
    }

    return 0;
}