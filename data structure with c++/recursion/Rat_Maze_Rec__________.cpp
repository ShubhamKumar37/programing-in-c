#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool Possible(vector<vector<int>> &Maze,
              vector<vector<int>> Visited,
              int Row, int Col,
              int A, int B)
{
    if (((A < Row && A >= 0) && (B < Col && B >= 0)) && (Visited[A][B] == 0) && Maze[A][B] == 1)
    {
        return true;
    }
    return false;
}

void Get_Sol_Maze(vector<vector<int>> &Maze,
                  vector<vector<int>> &Visited,
                  vector<string> &Ans, int Row, int Col,
                  int A, int B, string Path)
{
    if ((A == Row - 1) && (B == Col - 1))
    {
        Ans.push_back(Path);
        return;
    }
    Visited[A][B] = 1;
    int X = A + 1;
    int Y = B;
    if (Possible(Maze, Visited, Row, Col, X, Y))
    {
        Path.push_back('D');
        Get_Sol_Maze(Maze, Visited, Ans, Row, Col, X, Y, Path);
        Path.pop_back();
    }
    X = A - 1;
    Y = B;
    if (Possible(Maze, Visited, Row, Col, X, Y))
    {
        Path.push_back('U');
        Get_Sol_Maze(Maze, Visited, Ans, Row, Col, X, Y, Path);
        Path.pop_back();
    }
    X = A;
    Y = B + 1;
    if (Possible(Maze, Visited, Row, Col, X, Y))
    {
        Path.push_back('R');
        Get_Sol_Maze(Maze, Visited, Ans, Row, Col, X, Y, Path);
        Path.pop_back();
    }
    X = A;
    Y = B - 1;
    if (Possible(Maze, Visited, Row, Col, X, Y))
    {
        Path.push_back('L');
        Get_Sol_Maze(Maze, Visited, Ans, Row, Col, X, Y, Path);
        Path.pop_back();
    }

    Visited[A][B] = 0;
}

int main()
{
    int Row, Col;
    cout << "Enter row and coloumn = ";
    cin >> Row >> Col;

    vector<vector<int>> Maze(Row, vector<int>(Col));
    vector<vector<int>> Visited(Row, vector<int>(Col));
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cin >> Maze[i][j];
            Visited[i][j] = 0;
        }
    }

    vector<string> Ans;
    string Path = "";
    Get_Sol_Maze(Maze, Visited, Ans, Row, Col, 0, 0, "");
    cout << Ans.size() << endl;
    for (int i = 0; i < Ans.size(); i++)
    {
        cout << Ans[i] << " ";
    }

    return 0;
}

// 1 0 0 0
// 1 1 0 1
// 1 1 0 0
// 0 1 1 1