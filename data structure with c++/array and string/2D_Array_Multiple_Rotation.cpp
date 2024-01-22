#include<IOSTREAM>
#include<VECTOR>

using namespace std;

int main()
{
    int N;
    vector<vector<int>> Matrix(N, vector<int>(N));

    cout << "Enter the dimension of square matrix = ";
    cin >> N;

    cout << "Now enter the value of matrix elements in single line = ";
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> Matrix[i][j];
        }
    }
    
    return ;
}