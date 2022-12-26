#include <iostream>

using namespace std;

class shops
{
protected:
    int no;
    string name;

public:
    shops(int no, string name)
    {
        this->no = no;
        this->name = name;
    }
    virtual void display(void) { cout << "Get over here fagget" << endl; }
};

class firework : public shops
{
protected:
    string crackers;

public:
    firework(int no, string name, string crackers) : shops(no, name)
    {
        cout << "Shop number is " << no << endl;
        cout << "Name of the shop is " << name << endl;
        cout << "Type of cracker we sell is " << crackers << endl
             << endl;
    }
};

class bakery : public shops
{
protected:
    string food;

public:
    bakery(int no, string name, string food) : shops(no, name)
    {
        this->food = food;
    }
    void display(void)
    {
        cout << "Shop number is " << no << endl;
        cout << "Name of the shop is " << name << endl;
        cout << "Type of food we sell is " << food << endl
             << endl;
    }
};

int main()
{
    string name, crackers, food;
    int no;
    shops *a, *b;
    bakery n(101, "Sagar Bakery", "pastry");
    a = &n;
    a->display();
    firework temp(102, "Kalishwari", "Ground and Water");
    b = &temp;
    b->display();

    return 0;
}

// Virtual function only run when their is no function left in derived class
// Virtual function execute as a substitute to keep the flow of polymorphism