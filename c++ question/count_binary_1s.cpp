#include <iostream>

using namespace std;

int main()
{
    uint32_t a = 011111101;
    int c = 0;
    while (a != 0)
    {
        if (a & 1)
        {
            c++;
        }
        a = a >> 1;
    }
    cout << "The number of 1 in variable is " << c << endl;
    return 0;
}