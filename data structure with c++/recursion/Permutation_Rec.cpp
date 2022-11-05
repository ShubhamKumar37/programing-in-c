#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Permutation(vector<int> A, vector<vector<int>> &Ans, int Ind)
{
    if (Ind >= A.size())
    {
        Ans.push_back(A);
    }

    for (int i = Ind; i < A.size(); i++)
    {
        swap(A[Ind], A[i]);
        Permutation(A, Ans, Ind + 1);
        swap(A[Ind], A[i]);
    }
}

int main()
{
    vector<int> A = {1, 2, 3};
    vector<vector<int>> Ans;

    Permutation(A, Ans, 0);

    for (int i = 0; i < Ans.size(); i++)
    {
        for (int j = 0; j < Ans[0].size(); j++)
        {
            cout << Ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}