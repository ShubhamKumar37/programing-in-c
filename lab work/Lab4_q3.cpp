#include <iostream>

using namespace std;

class Base2;
class Base1
{
    int A;

public:
    Base1(int A)
    {
        this->A = A;
    }
    friend void Max_Of_Nums(Base1, Base2);
};

class Base2
{
    int B;

public:
    Base2(int B)
    {
        this->B = B;
    }
    friend void Max_Of_Nums(Base1, Base2);
};

void Max_Of_Nums(Base1 Num1, Base2 Num2)
{
    cout << "Max value of 2 number is " << ((Num1.A > Num2.B) ? (Num1.A) : (Num2.B)) << endl;
}

int main()
{
    Base1 A(30);
    Base2 B(10);

    Max_Of_Nums(A, B);

    return 0;
}