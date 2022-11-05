#include <iostream>

using namespace std;

bool Linear_Search(int Arr[], int N, int Key)
{
    if (N == 0)
    {
        return false;
    }
    else if (N == Key)
    {
        return true;
    }
    else
    {
        return Linear_Search(Arr + 1, N - 1, Key);
    }
}

int main()
{
    int Arr[] = {1, 4, 3, 5, 6, 3};
    int N = sizeof(Arr) / sizeof(int);
    int Key = 4;

    int Ans = Linear_Search(Arr, N, Key);
    if (Ans)
    {
        cout << "Your element is founded !!!!!" << endl;
    }
    else
    {
        cout << "Your element is not founded " << endl;
    }

    return 0;
}