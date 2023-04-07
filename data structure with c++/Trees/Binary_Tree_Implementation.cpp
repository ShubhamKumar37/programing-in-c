#include <iostream>
#include <QUEUE>
#include <VECTOR>

using namespace std;

class Node
{
public:
    int Data;
    Node *Left;
    Node *Right;

    Node(int Data)
    {
        this->Data = Data;
        this->Left = NULL;
        this->Right = NULL;
    }
};

Node *Build_Binary_Tree(Node *R);
Node *Build_Level_Order(void);
void Flatten_Doubly_LL(Node* root, Node* &Prev, Node* &Head);
void Level_Order_Traversal(Node *R);
void Pre_Order_Traversal(Node *R);
void In_Order_Traversal(Node *R);
void Post_Order_Traversal(Node *R);


// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
int main()
{
    Node *R = NULL;

    // R = Build_Binary_Tree(R);
    R = Build_Level_Order();
    cout << endl;

    In_Order_Traversal(R);
    cout << endl;
    Node* Prev = NULL;
    Node* Head = NULL;
    Flatten_Doubly_LL(R, Prev, Head);
    while(Head != NULL)
    {
        cout<<Head -> Data<< " ";
        Head = Head -> Right;
    }
    // cout<<R->Data<<endl;
    // cout<<R-> Left->Data<<endl;
    // cout<<R-> Right->Data<<endl;
    // cout<<R-> Left -> Right->Data<<endl;
    // Level_Order_Traversal(R);
    // cout << endl;
    // cout << "Preordered traversal = " << endl;
    // Pre_Order_Traversal(R);
    // cout << endl;
    // cout<<R-> Data<<endl;
    // Post_Order_Traversal(R);

    return 0;
}

void Flatten_Doubly_LL(Node* root, Node* &Prev, Node* &Head)
{
    if(root == NULL)
    {
        return ;
    }

    Flatten_Doubly_LL(root -> Left, Prev, Head);

    if(Prev == NULL)
    {
        Head = root;
    }
    else
    {
        Prev -> Right = root;
        root -> Left = Prev;
    }

    Prev = root;

    Flatten_Doubly_LL(root -> Right, Prev, Head);
}

Node *Build_Level_Order(void)
{
    int Data;
    queue<Node*> Q;
    cout << "Enter the data for root node = ";
    cin >> Data;
    Node *R = new Node(Data);
    Q.push(R);
    
    while(!Q.empty())
    {
        Node *Temp = Q.front();
        Q.pop();
        cout << "Enter the data for Left subtree = ";
        cin >> Data;
        if(Data != -1)
        {
            Temp -> Left = new Node(Data);
            Q.push(Temp -> Left);
        }

        cout << "Enter the data for Right subtree = ";
        cin >> Data;
        if(Data != -1)
        {
            Temp -> Right = new Node(Data);
            Q.push(Temp -> Right);
        }
    }

    return R;
}

void Pre_Order_Traversal(Node *R)
{
    if(R == NULL)
    {
        return ;
    }

    cout << R -> Data << " ";
    Pre_Order_Traversal(R -> Left);
    Pre_Order_Traversal(R -> Right);
}
void In_Order_Traversal(Node *R)
{
    if(R == NULL)
    {
        return ;
    }

    In_Order_Traversal(R -> Left);
    cout << R -> Data << " ";
    In_Order_Traversal(R -> Right);
}
void Post_Order_Traversal(Node *R)
{
    if(R == NULL)
    {
        return ;
    }

    Post_Order_Traversal(R -> Left);
    Post_Order_Traversal(R -> Right);
    cout << R -> Data << " ";
}

void Level_Order_Traversal(Node *R) 
{
    if(R == NULL)
    {
        cout << "Tree is empty!!" << endl;
        return ;
    }
    cout<<"69696969"<<endl;
    queue<Node *> Q;
    Q.push(R);
    vector<int> Ans;

    while(!Q.empty())
    {
        for(int i=0; i<Q.size(); i++)
        {
            Node* Front = Q.front();
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
        Node *Temp = Q.front();
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

Node *Build_Binary_Tree(Node *R)
{
    int Data;
    cout << "Enter the data for Node = ";
    cin >> Data;
    Node *New_Node = new Node(Data);

    if (Data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for Left subtree of " << Data << endl;
    New_Node->Left = Build_Binary_Tree(New_Node);

    cout << "Enter the data for Right subtree of " << Data << endl;
    New_Node->Right = Build_Binary_Tree(New_Node);

    return New_Node;
}
