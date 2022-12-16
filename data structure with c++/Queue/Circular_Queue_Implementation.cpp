#include<iostream>

using namespace std;

class CircularQueue{
    int *Arr;
    int Front;
    int Back;
    int n;
    public:

    CircularQueue(int N){

        n=N;
        Arr=new int[n];
        Front=Back=-1;
    }


    bool enqueue(int value){

        if((Back == n-1 && Front == 0) || (Back == (Front-1)%(n-1) )) 
        {
            return false;
        }
        
        else if(Front == -1)
        {
            Front=Back=0;
        }
        
        else if(Back == n-1 && Front!=0)
        {
            Back=0;
        }
        else
        {
            Back++;
        }
        
        Arr[Back]=value;
        return true;
    }

    int dequeue(){

        if(Front==-1)
        {
            return -1;
        }
        int Val=Arr[Front];        
        if(Front== Back)
        {

            Back=Front=-1;
        }
        else if(Front==n-1)
        {
            Front=0;
        }
        else 
        {
            Front++;
        }
        return Val;
    }
};

int main()
{
    CircularQueue A(10);
    A.enqueue(40);
    A.enqueue(30);
    A.enqueue(20);

    cout<<A.dequeue()<<endl;
    cout<<A.dequeue()<<endl;

}