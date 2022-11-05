#include <iostream>

using namespace std;

class shop
{
    int id, price;

public:
    shop(int a, int b)
    {
        id = a, price = b;
    }
    shop(int a);
    void print(void)
    {
        cout << "ID of the item is " << id << " and price of the item " << price << endl;
    }
};

shop ::shop(int a)
{
    id = a, price = 0;
}
int main()
{
    shop a(1001, 50);
    a.print();
    shop b(1002);
    b.print();
    return 0;
}