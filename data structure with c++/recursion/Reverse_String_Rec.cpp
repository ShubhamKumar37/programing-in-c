#include <iostream>
#include <string>

using namespace std;

void Reverse_Str_Rec(string &Arr, int i, int N)
{
    if (i > N)
    {
        return;
    }
    swap(Arr[i], Arr[N-i]);
    i++;
    Reverse_Str_Rec(Arr, i, N-i);
}
int main()
{
    string Arr = "Shubham";

    int N = Arr.length();

    Reverse_Str_Rec(Arr, 0, N-1 );

    cout << "After reversing the string " << Arr << endl;

    return 0;
}