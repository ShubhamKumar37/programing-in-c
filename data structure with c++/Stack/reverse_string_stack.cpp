#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> A;
    string Ch = "Shubham is a good boy yob doog a si mahbuhS";

    for (int i = 0; i < Ch.size(); i++)
    {
        A.push(Ch[i]);
    }
    for (int i = 0; i < Ch.size(); i++)
    {
        char Temp = A.top();
        A.pop();
        cout << Temp;
    }
    cout << endl;

    return 0;
}