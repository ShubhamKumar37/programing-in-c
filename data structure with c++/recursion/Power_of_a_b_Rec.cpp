#include <iostream>

using namespace std;

int Power_Rec(int A, int B)
{
    if (B == 0)
    {
        return 1;
    }
    if (B == 1)
    {
        return A;
    }
    int Ans = Power_Rec(A, B / 2);

    if (B % 2 == 0)
    {
        return Ans * Ans;
    }
    else
    {
        return A * Ans * Ans;
    }
}

int main()
{
    int A = 3;
    int B = 3;

    cout << "A to the power B is " << Power_Rec(A, B) << endl;

    return 0;
}