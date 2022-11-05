#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[32];
    int i=0;
    cout<<"Enter the string = ";
    cin.getline(a,32);
    cout<<"Length of the entered array is "<<strlen(a)<<endl;
    cout<<"Enter string is "<<a<<endl;

    return 0;
}