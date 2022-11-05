#include <iostream>

using namespace std;

int main()
{
    int N;
    int M;
    cout << "Enter the no of rows = ";
    cin >> N;
    cout << "Enter the no of columns = ";
    cin >> M;

    int **ptr = new int *[N];

    for (int i = 0; i < N; i++)
    {
        ptr[i] = new int[M];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> ptr[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < N; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}