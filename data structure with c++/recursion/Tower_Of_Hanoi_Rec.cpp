#include <iostream>

using namespace std;

void Tower_Of_Hanoi(int N, char S, char D, char H)
{
    if (N == 0)
    {
        return;
    }

    Tower_Of_Hanoi(N - 1, S, H, D);
    cout << "Disk " << N << " move " << S << " to " << D << endl;
    Tower_Of_Hanoi(N - 1, H, D, S);
}
    
int main()
{
    int N = 3;

    Tower_Of_Hanoi(N, 'A', 'C', 'B');

    return 0;
}