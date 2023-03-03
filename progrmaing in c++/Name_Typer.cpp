#include<iostream>
#include<STRING>
#include<WINDOWS.H>

using namespace std;

int main()
{
    int N;
    string Name;
    string Loop_Name;

    char Alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    cout<<"Enter you name = ";
    getline(cin ,Name);

    for(int i=0;i<Name.size();i++)
    {
        for(int j=0;j<27;j++)
        {
            Sleep(3);
            if(Name[i]==' ' || Name[i]==Alpha[j])
            {
                Loop_Name.push_back(Name[i]);
                cout<<Loop_Name<<endl;
                break;
            }
            else
            {
                cout<<Loop_Name<<Alpha[j]<<endl;
            }
        }
    }
    cout<<"enter any number to exit"<<endl;
    cin>>N;
    return 0;
}