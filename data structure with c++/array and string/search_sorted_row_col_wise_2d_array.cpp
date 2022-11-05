#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    vector<vector<int>> arr;
    for (int i = 0; i < row; i++)
    {
        vector<int> a;
        for (int j = 0; j < col; j++)
        {
            int ele;
            cin >> ele;
            a.push_back(ele);
        }
        arr.push_back(a);
    }
    int coln = col - 1;
    int rown = 0;
    int k = 4;
    while (coln >= 0 && rown < row)
    {
        int ele = arr[rown][coln];
        if (ele == k)
        {
            cout << "Element is founded " << endl;
            break;
        }
        else if (ele < k)
        {
            rown++;
        }
        else
        {
            coln--;
        }
    }
    cout << "I think you got you element >>>>>>>>" << endl;
    return 0;
}