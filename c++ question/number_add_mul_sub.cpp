#include <iostream>

using namespace std;

int main()
{
    int a = 2354;
    int sum = 0, mul = 1;
    while (a != 0)
    {
        int digit = a % 10;
        mul = mul * digit;
        sum = sum + digit;
        a = a / 10;
    }
    cout << "Answer is " << mul - sum << endl;
    return 0;
}