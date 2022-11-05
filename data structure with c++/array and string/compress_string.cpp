#include <iostream>
#include <vector>
#include <string>

using namespace std;

int com_str(string a)
{
    int i = 0;
    int ind = 0;
    int n = a.length();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && a[i] == a[j])
        {
            j++;
        }
        a[ind++] = a[i];
        string s = to_string(j - i);
        if (j - i > 1)
        {
            for (char ch : s)
            {
                a[ind++] = ch;
            }
        }
        i = j;
    }
    return ind;
}

int main()
{
    string a = "abaabaaaaaaa";

    cout << "Length after compresion = " << com_str(a);

    return 0;
}