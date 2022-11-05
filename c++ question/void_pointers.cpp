#include <iostream>

using namespace std;

int main()
{
    int a = 34;
    int *ptr1 = &a;
    char b = 'b';
    char *ptr2 = &b;
    void *ptr3 = &a;

    cout << "Int pointer " << *ptr1 << endl;
    cout << "Char pointer " << *ptr2 << endl;

    cout << "A void pointer casted as integer pointer " << *(int *)ptr3 << endl;
    cout << "A void pointer casted as character pointer but it is pointing to a integer variable so it will give garbage value " << endl;
    cout << "because we casting it to another variable type " << endl;
   // cout << *(char *)ptr3 << endl; // Garbage value
    // Be carefull with void pointer because it will be a logical error
    // and in real life program it is really difficult  to find it.

    return 0;
}