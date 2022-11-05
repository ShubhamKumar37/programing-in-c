#include <iostream>
#include <string>

using namespace std;

bool check_equal(int arr1[26], int arr2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }
    }
    return 1;
}

/* int check_anagram(string s1, string s2)
{
    int count = 0;
    int c1[26] = {0};
    int i = 0;
    while (s2[i] != '\0') // small string count c1;
    {
        c1[s2[i] - 'a']++;
        i++;
    }
    int j = s2.length();
    int c2[26] = {0};
    i = 0;
    while (i < j && i < s1.length())
    {
        c2[s1[i] - 'a']++;
        i++; // bigger string count c2;
    }
    if (check_equal(c1, c2))
    {
        count++;
    }
    while (i < s1.length())
    {
        c2[s1[i] - 'a']++;
        c2[s1[i - j] - 'a']--;
        i++;
        if (check_equal(c1, c2))
        {
            count++;
        }
    }
    return count;
} */

int check_anagram(string s1, string s2)
{
    int num = 0;
    int c2[26] = {0};
    int i = 0;
    while (s2[i] != '\0')
    {
        c2[s2[i++] - 'a']++;
    }
    int j = s2.length();
    i = 0;
    int c1[26] = {0};
    while (i < j && i < s1.length())
    {
        c1[s1[i++] - 'a']++;
    }
    if (check_equal(c1, c2))
    {
        num++;
    }
    while (i < s1.length())
    {
        c1[s1[i - j] - 'a']--;
        c1[s1[i] - 'a']++;
        if (check_equal(c1, c2))
        {
            num++;
        }
        i++;
    }
    return num;
}
int main()
{
    /*  string s1="aababb";
     string s2="ab"; */
    string s1 = "ababababc";
    string s2 = "ba";

    cout << "Is s1 is anagram of s2 " << endl;
    cout << check_anagram(s1, s2) << endl;

    return 0;
}