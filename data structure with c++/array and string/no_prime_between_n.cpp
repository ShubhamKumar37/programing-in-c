#include <iostream>
#include <vector>

using namespace std;

void c_prime(int n)
{
    vector<bool> a(n + 1, true);
    int c = 0;
    a[0] = a[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (a[i])
        {
            c++;
            cout << i << " ";
            for (int j = i; j < n; j += i)
            {
                a[j] = false;
            }
        }
    }
    cout << endl
         << "No of prime number exist between " << n << " is " << c << endl;
}

int main()
{
    int n = 13460;
    // cout<<"No of prime number between "<<n<<" is "<<c_prime(n)<<endl;
    c_prime(n);

    return 0;
}