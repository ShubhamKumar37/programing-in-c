#include <iostream>
#include <string>

using namespace std;

void set_of_length(string a)
{
    int c[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        c[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (c[i] != 0)
        {
            cout << char('a' + i) << " = " << c[i] << endl;
        }
    }
}

int main()
{
    string a = "abcdbsbghsd";
    string b = "sdfb";
    set_of_length(a);
    cout << endl
         << endl;
    set_of_length(b);

    return 0;
}