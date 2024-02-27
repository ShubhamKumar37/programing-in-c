#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    // auto New_Lambda = [](int A, int B) -> char*
    // {
    //     return "Shubham";
    // };
    
    int Num = 10;
    // auto New_Lambda = [&Num](int A, int B) -> int
    // {
    //     Num += 10;
    //     return A * Num + B * Num;
    // };
    auto New_Lambda = [Num]() mutable -> int
    {
        Num += 10;
        return Num;
    };

    // cout << New_Lambda(34, 23) << endl;
    cout << New_Lambda() << " -> " << Num << endl;
    return 0;
}