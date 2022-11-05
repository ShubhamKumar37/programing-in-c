#include <iostream>

using namespace std;

class Fibonacci
{
    int n;
    int arr[100 + 2];

public:
    Fibonacci() {}
    Fibonacci(int n)
    {
        this->n = n;
        arr[0] = 0, arr[1] = 1;
        for (int i = 2; i < n; i++)
        {
            arr[i] = arr[i - 2] + arr[i - 1];
        }
    }
    Fibonacci(Fibonacci &a) // Creation of copy constructor
    {
        n = a.n;
        for (int i = 0; i < n; i++)
        {
            arr[i] = a.arr[i];
        }
    }
    void display(void)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Fibonacci() {}
};

int main()
{
    Fibonacci a(10), b;
    cout << "Fibonacci series of a" << endl;
    a.display();
    b = a; // Copy constructor
    cout << "Fibonacci series of b after copy constructor" << endl;
    b.display();
    return 0;
}