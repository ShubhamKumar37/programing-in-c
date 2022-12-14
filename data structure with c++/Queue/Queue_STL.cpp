#include<IOSTREAM>
#include<QUEUE>

using namespace std;

int main()
{
    queue <int> A;

    A.push(10);
    A.push(20);
    A.push(30);

    cout<< A.back()<< endl;
    cout<< A.size()<< endl;
    cout<< A.front()<< endl;

    A.pop();
    A.pop();
    A.pop();
    cout<< A.back()<< endl;
    cout<< A.size()<< endl;
    cout<< A.front()<< endl;



    return 0;
}