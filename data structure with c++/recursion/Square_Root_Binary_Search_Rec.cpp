#include<iostream>

using namespace std;

int Square_Root_Rec(int N,int S,int E)
{
    int Mid=(S+E)>>1;
    if(S<=E)
    {
        int Sq=Mid*Mid;
        if(Sq==N)
        {
            return Mid;
        }
        else if(Sq<N)
        {
            return Square_Root_Rec(N,Mid+1,E);
        }
        else
        {
            return Square_Root_Rec(N,S,Mid-1);
        }
    }
    return Mid;
}

int main()
{
    int N=101;
    for(int i=0;i<N;i++)
    {
        cout<<"Square root of "<<i<<" is "<<Square_Root_Rec(i,1,i)<<endl;
    }
    return 0;
}