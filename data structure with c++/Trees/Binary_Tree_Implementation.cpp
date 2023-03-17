#include <iostream>
#include <QUEUE>
#include <VECTOR>

using namespace std;

class Root
{
public:
    int Data;
    Root *Left;
    Root *Right;

    Root(int Data)
    {
        this->Data = Data;
        this->Left = NULL;
        this->Right = NULL;
    }
};

Root *Build_Binary_Tree(Root *R);
Root *Build_Level_Order(void);
void Level_Order_Traversal(Root *R);
void Pre_Oreder_Traversal(Root *R);
void In_Oreder_Traversal(Root *R);
void Post_Oreder_Traversal(Root *R);


// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
int main()
{
    Root *R = NULL;

    // R = Build_Binary_Tree(R);
    R = Build_Level_Order();
    cout << endl;
    Level_Order_Traversal(R);
    // cout << endl;
    // cout << "Preordered traversal = " << endl;
    // Pre_Oreder_Traversal(R);
    // cout << endl;
    // In_Oreder_Traversal(R);
    // cout << endl;
    // Post_Oreder_Traversal(R);

    return 0;
}

Root *Build_Level_Order(void)
{
    int Data;
    queue<Root*> Q;
    cout << "Enter the data for root node = ";
    cin >> Data;
    Root *R = new Root(Data);
    Q.push(R);
    
    while(!Q.empty())
    {
        Root *Temp = Q.front();
        Q.pop();
        cout << "Enter the data for left subtree = ";
        cin >> Data;
        if(Data != -1)
        {
            Temp -> Left = new Root(Data);
            Q.push(Temp -> Left);
        }

        cout << "Enter the data for right subtree = ";
        cin >> Data;
        if(Data != -1)
        {
            Temp -> Right = new Root(Data);
            Q.push(Temp -> Right);
        }
    }

    return R;
}

void Pre_Oreder_Traversal(Root *R)
{
    if(R == NULL)
    {
        return ;
    }
    Root *Temp = R;
    cout << Temp -> Data << " ";
    Level_Order_Traversal(Temp -> Left);
    Level_Order_Traversal(Temp -> Right);
}
void In_Oreder_Traversal(Root *R)
{
    if(R == NULL)
    {
        return ;
    }
    Root *Temp = R;
    Level_Order_Traversal(Temp -> Left);
    cout << Temp -> Data << " ";
    Level_Order_Traversal(Temp -> Right);
}
void Post_Oreder_Traversal(Root *R)
{
    if(R == NULL)
    {
        return ;
    }
    Root *Temp = R;
    Level_Order_Traversal(Temp -> Left);
    Level_Order_Traversal(Temp -> Right);
    cout << Temp -> Data << " ";
}

void Level_Order_Traversal(Root *R) 
{
    if(R == NULL)
    {
        cout << "Tree is empty!!" << endl;
        return ;
    }

    queue<Root *> Q;
    Q.push(R);
    vector<int> Ans;

    while(!Q.empty())
    {
        for(int i=0; i<Q.size(); i++)
        {
            Root* Front = Q.front();
            Q.pop();

            Ans.push_back(Front -> Data);

            if(Front -> Left)
            {
                Q.push(Front -> Left);
            }
            if(Front -> Right)
            {
                Q.push(Front -> Right);
            }
        }
    }

    for(auto i : Ans)
    {
        cout << i << " ";
    }
    cout << endl;

    
    Q.push(R);
    Q.push(NULL);

    while(!Q.empty())
    {
        Root *Temp = Q.front();
        Q.pop();

        if(Temp == NULL)
        {
            cout << endl;
            if(!Q.empty())
            {
                Q.push(NULL);
            }
        }
        else
        {
            cout << Temp -> Data << " ";
            if(Temp -> Left != NULL)
            {
                Q.push(Temp -> Left);
            }
            if(Temp -> Right != NULL)
            {
                Q.push(Temp -> Right);
            }
        }
    }
}

Root *Build_Binary_Tree(Root *R)
{
    int Data;
    cout << "Enter the data for Node = ";
    cin >> Data;
    Root *Node = new Root(Data);

    if (Data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left subtree of " << Data << endl;
    Node->Left = Build_Binary_Tree(Node);

    cout << "Enter the data for right subtree of " << Data << endl;
    Node->Right = Build_Binary_Tree(Node);

    return Node;
}
