#include<iostream>
#include<list>
#include<unordered_map>

using namespace std;

class Graph
{
    public:
    unordered_map<int, list<int>> Adj_Graph;

    void Insert_Node(int v, int u, bool Is_Directed)
    {
        Adj_Graph[v].push_back(u);
        if(Is_Directed == 0)
        {
            Adj_Graph[u].push_back(v);
        }
    }

    void Print_Adj_Graph(void)
    {
        for(auto i : Adj_Graph)
        {
            cout << i.first << " = ";
            for(auto j : i.second)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph A1;
    int N;
    cout << "Enter the number of nodes to add  = ";
    cin >> N;


    for(int i = 0; i < N; i++)
    {
        int v, u;
        cout << "Enter the value of Node to connect with = ";
        cin >> v;
        cout << "Enter the value of Node to connect = ";
        cin >> u;

        A1.Insert_Node(v, u, 0);
    }
    cout << endl;

    A1.Print_Adj_Graph();

    return 0;
}