#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 3;
    int i = 0;
    int ans = 0;
    while (a != 0)
    {
        int ab = a & 1;
        ans = (ab * pow(10, i)) + ans;
        a = a >> 1;
        i++;
    }
    cout << "Binary of the entered number is " << ans << endl;
    return 0;
}