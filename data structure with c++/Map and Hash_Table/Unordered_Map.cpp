#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> Map;

    pair<char, int> P1 = make_pair('a', 2);
    Map.insert(P1);
    pair<char, int> P2('c', 2);
    Map.insert(P2);

    Map['b'] = 234;
    cout << Map['a'] << endl;
    cout << Map.at('a') << endl;
    cout << Map['d'] << endl;
    cout << Map.at('d') << endl;
    cout << Map.count('r') << endl;
    cout << Map['r'] << endl;

    for(auto i : Map)
    {
        cout << i.first << " , " << i.second << endl;
    }

    unordered_map<char, int> :: iterator it = Map.begin();
    while(it != Map.end())
    {
        cout << it -> first << " , " << it -> second << endl;
        it++;
    }

    return 0;
}