#include<iostream>

#define PI 3.14
#define AREA(r) PI * r * r

using namespace std;

int main()
{
    int r;
    cout<<"Enter the value of radius = ";
    cin>>r;
    int area=AREA(r);
    cout<<"Area of the circle is "<<area<<endl;

    return 0;
}