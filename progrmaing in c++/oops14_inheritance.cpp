#include <iostream>
#include "oops15_protected.cpp"

using namespace std;

class employee
{
public:
    // char B='A';
    // char T = 'T' ,u = 'U'; // Padding of class
    int salary, id;
    char T = 'T' ,u = 'U'; // Padding of class
    char Temp;
    char A='A';
    employee() {}
    // employee(char Temp) { this->Temp = Temp; }
    employee(int a)
    {
        id = a;
    }
    void display()
    {
        cout << "This is a base class and id is " << id << endl;
    }
};

class prog : public employee // public can be replaced to blank which became private visiblilty mode
{
    int lang = 9;
    // char T = 'T';char u = 'U'; // Padding of class
public:
    prog(int a)
    {
        id = a;
    }
    void print()
    {
        cout << "This is a derived class and the total language are " << lang << endl;
        cout << "And the id is " << id << endl;
    }
};

int main()
{
    employee sparsh(101), rahul(102);
    sparsh.display();
    rahul.display();
    prog shubham(103);
    shubham.display();
    shubham.print();
    // A.display();
    cout << "Size of class employee = " << sizeof(sparsh) << endl;
    cout << "Size of derived class prog = " << sizeof(shubham) << endl;

    // base A;
    // cout<<A.c<<endl;
    return 0;
}