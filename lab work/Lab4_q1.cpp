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
    inline friend int Display_Max3(Base, Base, Base); // Inline function
};

int Display_Max3(Base A, Base B, Base C)
{
    if (A.A > B.A && A.A > C.A)
    {
        return A.A;
    }
    else if (B.A > A.A && B.A > C.A)
    {
        return B.A;
    }
    else
    {
        return C.A;
    }
}

int main()
{
    Base A(20), B(30), C(10);

    cout << "Max in 3 number is " << Display_Max3(A, B, C);

    return 0;
}