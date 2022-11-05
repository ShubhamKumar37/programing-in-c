#include <iostream>
#include <vector>

using namespace std;

int largest_num(vector<int> a, int n)
{
    int i, maxi = INT_MIN;
    for (i = 0; i < n; i++)
    {
        maxi = a[i] > maxi ? a[i] : maxi;
    }
    return maxi;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 2, 34, 45, 2, 4, 55, 5, 45, 234, 5, 54, 345, 2, 54, 45, 454};
    cout << largest_num(arr, arr.size());
    return 0;
}