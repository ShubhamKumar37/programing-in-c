#include<iostream>
#include<DEQUE>

using namespace std;

int main()
{
    deque <int> A;

    A.push_back(20);
    A.push_front(50);

    cout<<A.front()<<endl;
    cout<<A.back()<<endl;

    A.pop_back();
    
    cout<<A.front()<<endl;
    cout<<A.back()<<endl;

    return 0;
}