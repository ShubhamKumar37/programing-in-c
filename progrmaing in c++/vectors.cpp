#include <iostream>
#include <vector>

using namespace std; // In vector whenever a element is appended then it will create an same array
                     // with double the size of its original array .

int main()
{
    // decleration
    vector<int> arr = {1, 2, 3, 4, 5};
    // decleration fill constructor
    //                   |- This is the only element which is going to fill entire array.
    vector<int> temp(10, 2);
    //                |-This is the number of elements
    cout << "Capacity of array before append is " << arr.capacity() << endl;
    // append
    arr.push_back(10);
    cout << "Capacity of array after append is " << arr.capacity() << endl;
    // pop
    arr.pop_back();
    cout << "Capacity of array after pop is " << arr.capacity() << endl; // Ater pop ,the capacity of vector
                                                                         // remain same as when element is append
    // print "SAME AS ARRAY"
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}