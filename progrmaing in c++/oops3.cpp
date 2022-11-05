#include <iostream>
using namespace std;
class shop
{
    int count, id[10], price[10];

public:
    void iden(void)
    {
        count = 0;
    }
    void getprice(void)
    {
        cout << "Enter the id of the item ";
        cin >> id[count];
        cout << "Enter the price of item ";
        cin >> price[count];
        count++;
    }
    void display(void)
    {
        for (int i = 0; i < count; i++)
        {
            cout << "Id of the item is " << id[i] << endl;
            cout << "Price of the item is " << price[i] << endl;
        }
    }
};

int main()
{
    shop s1;
    s1.iden();
    s1.getprice();
    s1.getprice();
    s1.getprice();
    s1.display();
    return 0;
}