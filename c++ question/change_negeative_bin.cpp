#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = -234, temp = abs(a);
    cout << temp << endl;
    int ans = 0;
    int i = 0;
    while (temp != 0)
    {
        int bit = temp & 1;
        ans = (bit * pow(10, i)) + ans;
        temp = temp >> 1;
        i++;
    }
    cout << ans << endl;
    ans = ~(ans) + 1;
    cout << "Binary of negeative number is " << ans << endl;
    return 0;
}