#include <iostream>
#include <vector>

using namespace std;

void Insert_Ele(vector<int> &A, int Val)
{
    // Base condition
    if (A.size() == 0 || A[A.size() - 1] <= Val)
    {
        A.push_back(Val);
        return;
    }

    int Element = A[A.size() - 1];
    A.pop_back();

    Insert_Ele(A, Val);
    A.push_back(Element);
}

void Sort_Array(vector<int> &A)
{
    // Base condition
    if (A.size() == 0)
    {
        return;
    }

    int Val = A[A.size() - 1];
    A.pop_back();
    Sort_Array(A);

    Insert_Ele(A, Val);
}

int main()
{
    vector<int> A = {9, 8, 7, 6, 5, 4, 3, 2, 1}; // 2,3,5,6,7,9

    Sort_Array(A);

    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}