#include <iostream>

using namespace std;

// Static variable can be acces by only Static member function
// if other member are tried to access form static member function
// then error will raise

class shop
{
    int count, id[10], price[10];
    static int num;

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
        num++;
    }
    void display(void)
    {
        for (int i = 0; i < count; i++)
        {
            cout << "Id of the item is " << id[i] << endl;
            cout << "Price of the item is " << price[i] << endl;
            cout << num << " is the position of the item" << endl;
        }
    }
};

int shop ::num; // static set the default as 0.

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