#include <iostream>
#include <string>
#include <map>
// #include<vector>

using namespace std;

int long_sub(string s1, int k)
{
    int i = 0, j = 0;
    map<char, int> a;
    int maxn = 0;
    while (j < s1.length())
    {
        a[s1[j]]++;
        if (a.size() < k)
        {
            j++;
        }
        else if (a.size() == k)
        {
            maxn = max(maxn, j - i + 1);
            j++;
        }
        else if (a.size() > k)
        {
            while (a.size() > k)
            {
                a[s1[i]]--;
                if (a[s1[i]] == 0)
                {
                    a.erase(s1[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxn;
}

int main()
{
    string s1 = "abaccab";
    int k = 2;

    cout << "Longest length subarray of unique character " << k << " is " << long_sub(s1, k) << endl;

    return 0;
}