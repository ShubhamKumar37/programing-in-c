#include<iostream>
#include<string>
#include<map>

using namespace std;

int minimum_win_sub(string arr,string s1)
{
    if(arr.length()<s1.length()) return -1;
    map <char,int> a;

    for(int i=0;i<s1.length();i++)
    {
        a[s1[i]]++;
    }
    /* cout<<a.size()<<endl;
    for(auto i:a)
    {
        cout<<i.first<<" = "<<i.second<<endl;
    } */
    int i=0,j=0;
    int count=a.size();
    int min_len=arr.length();
    int mini=0,minj=0;
    while(j<arr.length())
    {
        if(a.count(arr[j]))
        {
            a[arr[j]]--;
            // cout<<"subtract done"<<endl;
            if(a[arr[j]]==0)
            {
                count--;
            }
            if(count == 0)
            {
                while(count==0)
                {
                    if(min(min_len,j-i+1)!=min_len)
                    {
                        cout<<i<<" , "<<j<<endl;
                        mini=i,minj=j;
                    }
                    min_len=min(min_len,j-i+1);
                    // min_len=min_len<j-i+1?min_len:j-i+1;
                   
                    if(a.count(arr[i]))
                    {
                        a[arr[i]]++;
                        if(a[arr[i]]>0)
                        {
                            count++;
                        }
                        i++;
                    }
                    else i++;
                }
            }
        }
        j++;
    }
    cout<<mini<<"  ,  "<<minj<<endl;
    return min_len;
}

int main()
{
    string arr="dbaecbbabdcaafbddcabgba";
    string s1="abbccd";
    // string arr="afbfcfafbfffcfaffbffffc";
    // string s1="abc";
    cout<<arr.length()<<endl;

    cout<<"Minimum length of unique substring is "<<minimum_win_sub(arr,s1)<<endl;
    
    return 0;
}






    //     else if(count == 0)
    //     {
    //         while(count==0)
    //         {
    //             min_len=min(min_len,j-i+1);
    //             // min_len=min_len<j-i+1?min_len:j-i+1;
    //             cout<<i<<" , "<<j<<endl;
    //             mini=i,minj=j;
    //             if(a.count(arr[i]))
    //             {
    //                 a[arr[i]]++;
    //                 if(a[arr[i]]>0)
    //                 {
    //                     count++;
    //                 }
    //                 i++;
    //             }
    //             else i++;
    //         }
    //     }
    //     j++;
    // }