#include <iostream>

using namespace std;

class Base
{
    int A;

public:
    Base(int A)
    {
        this->A = A;
    }
    inline friend void Square_of_Num(Base); // Inline friend function
};

void Square_of_Num(Base Temp)
{
    cout << "Square of " << Temp.A << " is " << (Temp.A) * (Temp.A) << endl;
}

int main()
{
    Base A(20);

    Square_of_Num(A);

    return 0;
}