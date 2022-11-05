#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 1000000;
    int ans = 0, i = 0;
    while (a != 0)
    {
        int bit = a % 10;
        if (bit == 1)
        {
            ans = pow(2, i) + ans;
        }
        i++;
        a = a / 10;
    }
    cout << "Decimal number of this binary is " << ans << endl;
    return 0;
}