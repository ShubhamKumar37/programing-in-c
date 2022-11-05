#include<iostream>

using namespace std;

void NoOfChicks(int n){
	    // Code here
	    long long int Days[6]={0};
	    Days[0]=1;
	    long long Chicks=1;
	    for(int i=1;i<n;i++)
	    {
	        if(i>5)
	        {
	            Chicks-=Days[(i-6)%6];
	        }
	        Days[i%6]=Chicks*2;
	        Chicks+=Days[i%6];
	    }
	    cout<<Chicks<<endl;
	   // return Sum_Chick;
}

int main()
{
    int N=20;
    for(int i=1;i<N;i++)
    {
        NoOfChicks(i);
    }
    
    return 0;
}