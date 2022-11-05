#include <iostream>

using namespace std;

bool Possible_Allotment(int Arr[], int K, int Mid, int Num)
{
    int Student = 1;
    int Sum = 0;
    for (int i = 0; i < Num; i++)
    {
        if (Sum + Arr[i] <= Mid)
        {
            Sum += Arr[i];
        }
        else
        {
            Student++;
            if (Student > K || Arr[i] > Mid)
            {
                return false;
            }
            Sum = Arr[i];
        }
    }
    return true;
}

int Book_Allocated(int Arr[], int S, int Sum, int K, int Num)
{
    if (S <= Sum)
    {
        int Mid = (S + Sum) >> 1;
        if (Possible_Allotment(Arr, K, Mid, Num))
        {
            return Book_Allocated(Arr, S, Mid - 1, K, Num);
        }
        else
        {
            return Book_Allocated(Arr, Mid + 1, Sum, K, Num);
        }
    }
}

int main()
{
    int Arr[] = {10, 20, 30, 40};

    int K = 2;

    int Num = sizeof(Arr) / sizeof(int);

    int Sum = 0;
    for (int i = 0; i < Num; i++)
    {
        Sum += Arr[i];
    }
    cout << "Minimum number of book allocated = " << Book_Allocated(Arr, 0, Sum, K, Num);

    return 0;
}