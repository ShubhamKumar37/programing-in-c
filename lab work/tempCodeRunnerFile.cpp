#include <iostream>
using namespace std;

const int N = 5; // size of the array

int main() {
  int arr[N]; // array to store the values
  for (int i = 0; i < N; i++) {
    cout << "Enter a value for arr[" << i << "]: ";
    cin >> arr[i];
  }

  // Print the values in the array
  cout << "Values in the array: ";
  for (int i = 0; i < N; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
