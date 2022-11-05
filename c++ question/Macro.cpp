#include<iostream>

#define PI 3.14

using namespace std;

int main()
{
    int r;
    cout<<"Enter radius = ";
    cin>>r;
    double area=PI* r*r;
    cout<<"Area of circle of radius "<<r<<" = "<<area<<endl;

    return 0;
}