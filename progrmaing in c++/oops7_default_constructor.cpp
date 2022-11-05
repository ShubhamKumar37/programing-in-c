#include <iostream>

using namespace std;

class shop
{
    int id;
    int price;

public:
    shop(void);
    void print(void)
    {
        cout << "Value given by the deafult constructor is " << id << " , " << price << endl;
    }
};

shop ::shop(void)
{
    id = 10;
    price = 0;
}

int main()
{
    shop a;
    a.print();
    return 0;
}