#include<IOSTREAM>
#include<QUEUE>

using namespace std;

class Node
{
public:
    int Data;
    Node *left;
    Node *right;

    Node(int Data)
    {
        this -> Data = Data;
        left = NULL;
        right = NULL;
    }
};

void Insert_BST(Node *&root, int Data)
{
    if(root == NULL)
    {
        root = new Node(Data);
        return ;
    }

    if(Data < root -> Data)
    {
        Insert_BST(root -> left, Data);
    }
    else
    {
        Insert_BST(root -> right, Data);
    }
}

void Create_BST(Node *&root)
{
    int Data;
    cout << "Enter the data = ";
    cin >> Data;

    while(Data != -1)
    {
        Insert_BST(root, Data);
        cin >> Data;
    }
}

void Level_Order_Traversal(Node *root)
{
    if(root == NULL)
    {
        return ;
    }

    queue<Node*> Ans;
    Ans.push(root);
    Ans.push(NULL);

    while(!Ans.empty())
    {
        Node* Front = Ans.front();
        Ans.pop();

        if(Front == NULL)
        {
            cout<<endl;
            if(!Ans.empty())
            {
                Ans.push(NULL);
            }
        }
        else
        {
            cout<<Front -> Data<<" ";
            if(Front -> left)
            {
                Ans.push(Front -> left);
            }
            if(Front -> right)
            {
                Ans.push(Front -> right);
            }
        }
    }
}

void Inorder_Traversal(Node *root)
{
    if(root == NULL)
    {
        return ;
    }

    Inorder_Traversal(root -> left);
    cout << root -> Data << " ";
    Inorder_Traversal(root -> right);
}
void Postorder_Traversal(Node *root)
{
    if(root == NULL)
    {
        return ;
    }

    Postorder_Traversal(root -> left);
    Postorder_Traversal(root -> right);
    cout << root -> Data << " ";
}

void Preorder_Traversal(Node *root)
{
    if(root == NULL)
    {
        return ;
    }

    cout << root -> Data << " ";
    Preorder_Traversal(root -> left);
    Preorder_Traversal(root -> right);
}

int main()
{
    Node* root = NULL;

    Create_BST(root);
    //7 2 4 5 0 1 -1

    Level_Order_Traversal(root);
    cout<<endl;
    Preorder_Traversal(root);
    cout<<endl;
    Inorder_Traversal(root);
    cout<<endl;
    Postorder_Traversal(root);

    return 0;
}