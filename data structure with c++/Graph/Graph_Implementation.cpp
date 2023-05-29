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

// void Make_Adjacent(vector<pair<int, int>> &edges, unordered_map<int, set<int>> &Adj)
// {
//     for(int i = 0; i < edges.size(); i++)
//     {
//         int v = edges[i].first;
//         int u = edges[i].second;

//         Adj[u].insert(v);
//         Adj[v].insert(u);
//     }
// }

    // void Traverse_BFS(unordered_map<int, set<int>> &Adj, unordered_map<int, bool> &Map, vector<int> &Ans, int Val)
    // {
    //     queue<int> Q;
    //     Q.push(Val);
    //     Map[Val] = true;
    //     while(!Q.empty())
    //     {
    //         int Front = Q.front();
    //         Q.pop();

    //         Ans.push_back(Front);
    //         for(auto i : Adj[Front])
    //         {
    //             if(Map[i] == false)
    //             {
    //                 Q.push(i);
    //                 Map[i] = true;
    //             }
    //         }
    //     }
    // }

    // vector<int> BFS(int vertex, vector<pair<int, int>> edges)
    // {
    //     // Write your code here
    //     vector<int> Ans;
    //     unordered_map<int, set<int>> Adj;
    //     unordered_map<int, bool> Visited;

    //     Make_Adjacent(edges, Adj);

    //     for(int i = 0; i < vertex; i++)
    //     {
    //         if(!Visited[i])
    //         {
    //             Traverse_BFS(Adj, Visited, Ans, i);
    //         }
    //     }

    //     return Ans;

    // }

    // void Make_DFS(unordered_map<int, set<int>> &Map, unordered_map<int, bool> &Visited, vector<int> &Temp, int Node)
    // {
    //     Visited[Node] = true;
    //     Temp.push_back(Node);
        
    //     for(auto i : Map[Node])
    //     {
    //         if(!Visited[i])
    //         {
    //             Make_DFS(Map, Visited, Temp, i);
    //         }
    //     }
    // }

    // vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
    // {
    //     // Write your code here
    //     vector<vector<int>> Ans;
    //     unordered_map<int, set<int>> Map;
    //     unordered_map<int, bool> Visited;

    //     for(int i = 0; i < E; i++)
    //     {
    //         Map[edges[i][0]].insert(edges[i][1]);
    //         Map[edges[i][1]].insert(edges[i][0]);
    //     }

    //     for(int i = 0; i < V; i++)
    //     {
    //         if(!Visited[i])
    //         {
    //             vector<int> Temp;
    //             Make_DFS(Map, Visited, Temp, i);
    //             Ans.push_back(Temp);
    //         }
    //     }

    //     return Ans;

    // }

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