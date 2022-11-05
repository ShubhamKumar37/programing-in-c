#include <iostream>

using namespace std;

void make_lower(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
        i++;
    }
}

bool check_palindrome(char arr[])
{
    make_lower(arr);
    int i = 0;
    while (arr[i] != '\0')
    {
        if (arr[i] == ' ')
        {
            int j = i;
            while (arr[j] != '\0')
            {
                arr[j] = arr[j + 1];
                j++;
            }
        }
        i++;
    }
    arr[i] = '\0';
    int s = 0;
    int e = i - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return false;
        }
        s++, e--;
    }
    return true;
}

int main()
{
    char arr[] = "MADAM noN madam";
    int n = sizeof(arr) / sizeof(char);

    cout << "Enter string is palindrome or not = " << check_palindrome(arr) << endl;
    make_lower(arr);
    return 0;
}