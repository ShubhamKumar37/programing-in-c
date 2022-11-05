#include <iostream>

#define Area(l, b) ((l) * (b))
// #define Area(l, b) (l * b)

using namespace std;

int main()
{
    int l = 23;
    int c = 34;

    // int area = Area(l, c); // Area(l,b) is replaced by macro
    int area = Area(l+1,+2 +c); //here it first multiply 1 and 2 then 
    //add the remaining arguments because * have higher precedence
    //then + . As it should be editied in #define .
    cout << "Area of rectangle is " << area << endl;

    return 0;
}