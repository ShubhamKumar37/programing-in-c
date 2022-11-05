#include <iostream>
#include <string>

using namespace std;

bool Check_Palindrome_Rec(string Str, int i, int N)
{
    if (i > N)
    {
        return true;
    }
    if (Str[i] == Str[N - i])
    {
        return Check_Palindrome_Rec(Str, ++i, N);
    }
    return false;
}

int main()
{
    string Str = "madam";

    int N = Str.length();

    bool Ans = Check_Palindrome_Rec(Str, 0, N - 1);

    if (Ans)
    {
        cout << "Yes the string is palindrome " << endl;
    }
    else
    {
        cout << "No the string is not palindrome " << endl;
    }

    return 0;
}