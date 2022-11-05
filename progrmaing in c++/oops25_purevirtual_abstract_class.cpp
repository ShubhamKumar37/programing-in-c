#include <iostream>

using namespace std;

class shops // This shops class is abstract class because this class is use to make other class.
            // Only the template of other class is defined in these type of class.
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
    virtual void display(void) = 0; // This will make other inherited class to create this function forcefully
                                    // other wise it will raise a error.
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
    void display()
    {
        cout<<"Happen"<<endl;
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

/* oops25_purevirtual_abstract_class.cpp: In function 'int main()':
oops25_purevirtual_abstract_class.cpp:61:12: error: cannot declare variable '
' to be of abstract type 'bakery'   61 |     bakery n(101, "Sagar Bakery", "pastry");      |            ^oops25_purevirtual_abstract_class.cpp:37:7: note:   because the following virtual functions are pure within 'bakery':   37 | class bakery : public shops            |       ^~~~~~
oops25_purevirtual_abstract_class.cpp:18:18: note:     'virtual void shops::display()'   18 |     virtual void display(void)=0;  //This will make other inherited class to create this function forcefully      |                  ^~~~~~~
oops25_purevirtual_abstract_class.cpp:64:14: error: cannot declare variable 'temp' to be of abstract type 'firework'   64 |     firework temp(102, "Kalishwari", "Ground and Water");      |              ^~~~
oops25_purevirtual_abstract_class.cpp:22:7: note:   because the following virtual functions are pure within 'firewor':
   22 | class firework : public shops      |       ^~~~~~~~
oops25_purevirtual_abstract_class.cpp:18:18: note:     'virtual void shops::display()'   18 |     virtual void display(void)=0;  //This will make other inherited class to create this function forcefully      |                  ^~~~~~~ */