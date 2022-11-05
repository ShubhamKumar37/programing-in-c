#include <iostream>
#include <string.h>

using namespace std;

class Base
// Deep Copying
{
public:
    int A;
    int B;
    char *N;

    Base() {}
    Base(int A, int B, char Na[])
    {
        this->A = A;
        this->B = B;
        N = new char[100];
        strcpy(this->N, Na);
    }
    Base(Base &Temp)
    {
        cout << "Copy Constructor" << endl;
        this->A = Temp.A;
        this->B = Temp.B;
        char *Name = new char[strlen(Temp.N) + 1];
        strcpy(Name, Temp.N);
        this->N = Name;
    }

    void Display(void)
    {
        cout << "Value of A is " << this->A << endl;
        cout << "Value of B is " << this->B << endl;
        cout << "Name is " << this->N << endl;
    }

    void Set_Name(char N[])
    {
    }
};

int main()
{
    char N[] = "Shubham";

    Base A(10, 20, N);
    // A.Set_Name(N);

    Base B(A);

    A.Display();
    B.Display();

    A.N[0] = 'T';

    A.Display();
    B.Display();

    B = A;

    A.Display();
    B.Display();

    return 0;
}

// Shallow Copy
// Deafult Constructor and Assingment operator do shallow copy___.
// Here all the value is coppied even the pointer variable due to which
// after copping the class object both pointer variable start pointing
// to 1 address which cause some majour issue like if we change 1 variable
// which is a pointer then it will change the value of the pointer
// which was coppied before automatically.