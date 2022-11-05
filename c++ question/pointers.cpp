#include <iostream>

using namespace std;

void increment(int **p)
{
    ++(**p);
}

int main()
{
    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num << endl;
    // 111

    // int a=34;
    // int b=12;
    // int *ptr=&a;
    // int *sec=&b;
    // cout<<*sec<<endl;
    // *sec=3;
    // cout<<*sec<<endl;
    // cout<<b<<endl;
    // cout<<sec<<endl;
    // cout<<&b<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<a<<endl;
    // cout<<&a<<endl;

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // int *t=q;
    // cout << first << endl;
    // cout << *p << endl;
    // cout << *q << endl;
    // cout << *t << endl;
    // (*q)++;
    // cout << first << endl;
    // cout << *p << endl;
    // cout << *q << endl;
    // cout << p << endl;
    // cout << q << endl;

    // int first = 8;
    // int *p = &first;
    // cout << first << endl;
    // cout << *p << endl;
    // cout << p << endl;
    // cout << (*p)++ << " ";
    // cout << first << endl;
    // cout << *p << endl;
    // cout << p << endl;
    // 8 8 add 8 9 9 add

    // int *p = 0;
    // int first = 110;
    // cout << *p << endl;
    // cout << first << endl;
    // *p = first;   //segmentation fault.
    // cout << *p << endl;
    // cout << first << endl;
    // cout << p << endl;
    // //0 110

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // cout << first << "  " << second << "  " << *third << endl;
    // first = *third;
    // cout << first << "  " << second << "  " << third << endl;
    // *third = *third + 2;
    // cout << first << "  " << second << "  " << third << endl;
    // cout << first << "  " << second << endl;
    // 8 11 11    11 11 11    11 13 13   11 13

    // float f = 12.5;
    // float p = 21.5;
    // float* ptr = &f;
    // cout << *ptr << " " << f << " " << p << endl;
    // (*ptr)++;
    // cout << *ptr << " " << f << " " << p << endl;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p << endl;
    // 12.5 12.5 21.5  13.5 13.5 21.5  21.5 21.5 21.5

    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;
    // 20 8

    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr+1) << endl;
    // 11 21

    // int arr[6] = {11, 12, 31};
    // cout << arr << " " << &arr << endl;
    // add add

    // int arr[6] = {11, 21, 13};
    // cout << (arr + 1) << endl;
    // error XXXXX  add  </

    // int arr[6] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl;//we can access element of array by subscript
    // even if it is a pointer
    // cout<<p[1]<<p[0]<<endl;
    // add XXXXX  element </

    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 3);
    // 11 14

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++;
    //      error: lvalue required as increment operand
    //   109 |     int *ptr=arr++;
    // int *ptr = arr + 1; // do this
    // cout << *ptr << endl;

    // char ch = 'a';
    // char *ptr = &ch;
    // cout << *ptr << endl;
    // cout << ch << endl;
    // ch++;
    // cout << *ptr << endl;
    // cout << ch << endl;
    // a a b b

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;

    // int first = 10;
    // int *p = &first;
    // int **q = &p;
    // cout<<first<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<*q<<endl;
    // int second = 20;
    // *q = &second;
    // cout<<first<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<*q<<endl;
    // (*p)++;
    // cout<<first<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<*q<<endl;
    // cout << first << " " << second << endl;
    // 10 10 10 add 10 20 20 adds 10 21 21 adds 10 21

    // int first = 110;
    // int *p = &first;
    // cout << first << " " << *p << endl;
    // int **q = &p;
    // cout << first << " " << *p<<" "<<**q << endl;
    // int second = (**q)++ + 9;
    // cout << first << " " << *p<<" "<<**q << endl;
    // cout << first << " " << second << endl;
    // 110 110    110 110 110    111 111 111    111 119

    // int first = 100;
    // int *p = &first;
    // cout << first << " " << *p << endl;
    // int **q = &p;
    // cout << first << " " <<*p<<" "<<**q << endl;
    // int second = ++(**q);
    // int *r = *q;
    // cout << first << " " << second <<" "<<*r<< endl;
    // ++(*r);
    // cout << first << " " << second <<" "<<*r<< endl;
    // cout << first << " " << second << endl;
    // 100 100    100 100 100    101 101 101   102 101 102    102 101

    // int arr[] = {41, 52, 36, 74};
    // cout << *arr<<endl;
    // int *p = (arr + 1);
    // cout << *arr + 8<<" "<<*p<<endl;
    // error XXXXX 41 49 52 >/

    // char *p;
    // char str[] = "pqrstuv";
    // p = str;
    // p += 3; //increment the pointer by 3;
    // cout << p;
    // string XXXXX from index 3 </ (0 base index)

    // char arr[20];
    // int i;
    // for (i = 0; i < 10; i++)
    // {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout << arr;
    // ABCDEFGHIJ

    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout << *ptr2 << " "<<*ptr1 <<endl;
    // cout << ptr2 -ptr1<<endl; //here the simple maths is done
    // in this both value have ptr1 so when we substract it the only
    // 3 , 4 left so here only basic maths just implemented
    // if there is more then equal amount of ptr then address will print
    // 90.5 12.5 3

    // char st[] = "ABCD";
    // for (int i = 0; st[i] != '\0'; i++)
    // {
    //     cout << st[i] << *(st) + i << *(i + st) << i[st]<<endl;
    // when char pointer is incremented with integer then
    // it returns the int part if it is printed using * operator
    // }
    // ABAA  BCBB CDCC DEDD
    // 65    66   67   68

    return 0;
}

//‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘‘