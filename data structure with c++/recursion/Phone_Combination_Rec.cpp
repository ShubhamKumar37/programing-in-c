#include<iostream>
#include<string>
#include<vector>

using namespace std;

void Combination(string A,vector<string> &Ans,string Output,string Map[],int Ind)
{

    if(Ind>=A.size())
    {
        Ans.push_back(Output);
        return ;
    }

    int Ele=A[Ind]-'0';
    string Str=Map[Ele];
    for(int i=0;i<Str.length();i++)
    {
        Output.push_back(Str[i]);
        Combination(A,Ans,Output,Map,Ind+1);
        Output.pop_back();
    }



    // if(Ind>=A.length())
    // {
    //     Ans.push_back(Output);
    //     return ;
    // }

    // int Ele=A[Ind] - '0';
    // string Temp=Map[Ele];
    // for(int i=0;i<Temp.length();i++)
    // {
    //     Output.push_back(Temp[i]);
    //     Combination(A,Ans,Output,Map,Ind+1);
    //     Output.pop_back();
    // }
}

int main()
{
    string A="34";
    string Map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    vector <string> Ans;
    string Output;

    Combination(A,Ans,Output,Map,0);

    for(int i=0;i<Ans.size();i++)
    {
        cout<<Ans[i]<<" ";
    }    

    return 0;
}