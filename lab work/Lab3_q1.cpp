#include <iostream>

using namespace std;

class Factorial
{
    int n;
    int fact = 1;

public:
    Factorial(int n)
    {
        this->n = n;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
    }
    void display(void)
    {
        cout << "Factorial of " << n << " is " << fact << endl;
    }
};

int main()
{
    Factorial a(5), b(10);
    a.display();
    b.display();
    return 0;
}