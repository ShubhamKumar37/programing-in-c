#include <iostream>

using namespace std;

class A
{
public:
    void display()
    {
        cout << "HAMA JO CHAHIA USA HAM NAHI CHAHIA OR" << endl;
    }
};

class B
{
public:
    void display()
    {
        cout << "JISA HAM CHAHIA VO KISA CHAHIA !!!!" << endl;
    }
};

class derived : public A, public B
{
public:
    void display()
    {
        A ::display(); // Here you decide which function will invoke.
    }
};

int main()
{
    A a;
    B b;
    derived d;
    a.display();
    b.display();
    // d.display();   This will produce ambiguity error due to confusion that
    //                form where the function display will invoke.
    d.display();
    b.display();
    return 0;
}

/*ERROR WILL BE
PS D:\programing in c> cd "d:\programing in c\progrmaing in c++\" ; if ($?) { g++ oops16_ambiguity.cpp -o oops16_ambiguity } ; if ($?) { .\oops16_ambiguity }
oops16_ambiguity.cpp:43:2: error: expected '}' at end of input
   43 | }
      |  ^
oops16_ambiguity.cpp:24:1: note: to match this '{'
   24 | {
      | ^
oops16_ambiguity.cpp: In member function 'int derived::main()':
oops16_ambiguity.cpp:41:7: error: request for member 'display' is ambiguous
   41 |     d.display();
      |       ^~~~~~~
oops16_ambiguity.cpp:17:10: note: candidates are: 'void B::display()'
   17 |     void display()
      |          ^~~~~~~
oops16_ambiguity.cpp:8:10: note:                 'void A::display()'
    8 |     void display()
      |          ^~~~~~~
oops16_ambiguity.cpp: At global scope:
oops16_ambiguity.cpp:43:2: error: expected unqualified-id at end of input
   43 | }
      |  ^
PS D:\programing in c\progrmaing in c++>
*/