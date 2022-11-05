#include <iostream>

using namespace std;

int & display(int n)
{
    int a=++n;
    int &b=a;  //This will rase a warning because scope of variable is 
    // out of block
    return b;
}
int * display_ptr(int n)
{
    int a=++n;
    int *b=&a;  //This will rase a warning because scope of variable is 
    // out of block
    return b;
}

void update(int &A) // Change value due to refrence variable is used
{
    A++;
}

int main()
{
    int A = 9;
    int &B = A;
    // cout << "Before update = " << A << endl;
    // update(A); // changes the value
    // cout << "After update = " << A << endl;
    cout<<"Value of A is "<<display(A)<<endl;
    // cout<<A<<endl;
    // cout<<B<<endl;
    // cout<<A++<<endl;
    // cout<<B<<endl;

    return 0;
}