#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char *name;
    char *address;
    int age;
    double salary;

public:
    void setdata(void)
    {
        char nam[20];
        char ad[20];

        cout << "Enter the name of the person = ";
        gets(nam);
        name = new char[sizeof(nam) / sizeof(char)];
        strcpy(name, nam);

        cout << "Enter the address of the person = ";
        gets(ad);
        address = new char[sizeof(ad) / sizeof(char)];
        strcpy(address, ad);

        cout << "Enter the age of the person = ";
        cin >> age;

        cout << "Enter the salary of the person = ";
        cin >> salary;
    }
    void display(void)
    {
        cout << "Name of the person is " << name << endl;
        cout << "Address of the person is " << address << endl;
        cout << "Age of the person is " << age << endl;
        cout << "Salary of the person is " << salary << endl;
    }
    ~Person()
    {
        delete name;
        delete address;
    }
};

int main()
{
    Person a;
    a.setdata();
    a.display();
    return 0;
}