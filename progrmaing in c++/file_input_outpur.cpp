#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string a = "Hi python this is me back";
    ofstream out;
    out.open("hello.txt");
    out << a;
    out.close();
    ifstream in;
    in.open("hello.txt");
    getline(in, a);     
    cout << a << endl;
    return 0;
}