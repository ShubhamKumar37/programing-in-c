#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int row = 3;
    int col = 4;
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

    int s = 0, e = arr.size() * arr[0].size() - 1;
    int mid = (s + e) >> 1;
    int k = 8;
    while (s <= e)
    {
        int ele = arr[mid / arr[0].size()][mid % arr[0].size()];
        if (ele == k)
        {
            cout << "Element index is " << mid << endl;
            break;
        }
        else if (ele < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) >> 1;
    }
    cout << "I think you got your element index >>>>>>>>" << endl;
    return 0;
}