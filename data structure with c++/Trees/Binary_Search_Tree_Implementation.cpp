#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Node
{
public:
    int Data;
    Node *left;
    Node *right;

    Node(int Data)
    {
        this->Data = Data;
        left = NULL;
        right = NULL;
    }
};

void Insert_BST(Node *&root, int Data);
void Create_BST(Node *&root);
void Level_Order_Traversal(Node *root);
void Inorder_Traversal(Node *root);
void Postorder_Traversal(Node *root);
void Preorder_Traversal(Node *root);
void Min_Max_Tree(Node *root);
void Inorder_Successor(Node *root, int Val);
void Inorder_Predecessor(Node *root, int Val);
void Morris_Traversal_Preorder(Node *root);
void Morris_Traversal_Inorder(Node *root);
void Morris_Traversal_Postorder(Node *root);
Node *Max_Tree(Node *root);
Node *Min_Tree(Node *root);
Node *Delete_Node(Node *root, int Val);
Node* Flatten(Node* root);

int main()
{
    Node *root = NULL;

    Create_BST(root);
    // 7 2 4 5 0 1 -1

    Node* Ans = Flatten(root);
    while(Ans != NULL)
    {
        cout<<Ans -> Data<< " ";
        Ans = Ans -> right;
    }

    // Morris_Traversal_Inorder(root);
    // cout << endl;
    // Morris_Traversal_Preorder(root);
    // cout << endl;
    // Morris_Traversal_Postorder(root);
    // cout << endl;
    // Level_Order_Traversal(root);
    // cout << endl;
    // Preorder_Traversal(root);
    // cout << endl;
    // Inorder_Traversal(root);
    // cout << endl;
    // Postorder_Traversal(root);
    // cout << endl;

    // Min_Max_Tree(root);

    // Inorder_Successor(root, 7);
    // Inorder_Predecessor(root, 4);

    // root = Delete_Node(root, 7);

    // Level_Order_Traversal(root);
    // cout << endl;
    // Preorder_Traversal(root);
    // cout << endl;
    // Inorder_Traversal(root);
    // cout << endl;
    // Postorder_Traversal(root);
    // cout << endl;

    // Min_Max_Tree(root);

    // Inorder_Successor(root, 7);
    // Inorder_Predecessor(root, 4);

    return 0;
}

Node* Flatten(Node* root)
{
    Node* Temp = root;
    Node* Ans = NULL;
    bool Root_Found = false;

    while (Temp != NULL) {
        if (Temp->left == NULL) {
            if (Root_Found == false) {
                Ans = Temp;
                Root_Found = true;
            }
            Temp = Temp->right;
        } else {
            Node* Pred = Temp->left;
            while (Pred->right != NULL && Pred->right != Temp) {
                Pred = Pred->right;
            }

            if (Pred->right == NULL) {
                Pred->right = Temp;
                Temp = Temp->left;
            } else {
                Temp->left = NULL;
                Temp = Temp->right;
            }
        }
    }
    return Ans;
}

void Morris_Traversal_Preorder(Node *root)
{
    if (root == NULL)
    {
        cout << "Root is NULL" << endl;
        return;
    }

    Node *Temp = root;

    while (Temp != NULL)
    {
        
        if (Temp->left == NULL)
        {
            cout << Temp->Data << " ";
            Temp = Temp->right;
        }
        else
        {
            Node *Pred = Temp->left;
            while (Pred->right != NULL && Pred->right != Temp)
            {
                Pred = Pred->right;
            }

            if (Pred->right == NULL)
            {
                Pred->right = Temp;
                cout << Temp->Data << " ";
                Temp = Temp->left;
            }
            else
            {
                Pred->right = NULL;
                Temp = Temp->right;
            }
        }
    }
}

void Morris_Traversal_Inorder(Node *root)
{
    if (root == NULL)
    {
        cout << "Root is NULL" << endl;
        return;
    }

    Node *Temp = root;
    while (Temp != NULL)
    {
        if (Temp->left == NULL)
        {
            cout << Temp->Data << " ";
            Temp = Temp->right;
        }
        else
        {
            Node *Pred = Temp->left;
            while (Pred->right != NULL && Pred->right != Temp)
            {
                Pred = Pred->right;
            }

            if (Pred->right == NULL)
            {
                Pred->right = Temp;
                Temp = Temp->left;
            }
            else
            {
                cout << Temp->Data << " ";
                Pred->right = NULL;
                Temp = Temp->right;
            }
        }
    }
}

void Morris_Traversal_Postorder(Node *root)
{
    if (root == NULL)
    {
        cout << "Root is NULL" << endl;
        return;
    }

    Node *Temp = root;
    stack<int> S;

    while (Temp != NULL)
    {
        if(Temp -> right == NULL)
        {
            S.push(Temp -> Data);
            Temp = Temp -> left;
        }
        else
        {
            Node* Pred = Temp -> right;
            while(Pred -> left != NULL && Pred -> left != Temp)
            {
                Pred = Pred -> left;
            }

            if(Pred -> left == NULL)
            {
                Pred -> left = Temp;
                S.push(Temp -> Data);
                Temp = Temp -> right;
            }
            else
            {
                Pred -> right = NULL;
                Temp = Temp -> left;
            }
        }
    }

    while (!S.empty())
    {
        int Val = S.top();
        S.pop();
        cout << Val << " ";
    }
}

void Insert_BST(Node *&root, int Data)
{
    if (root == NULL)
    {
        root = new Node(Data);
        return;
    }

    if (Data < root->Data)
    {
        Insert_BST(root->left, Data);
    }
    else
    {
        Insert_BST(root->right, Data);
    }
}

void Create_BST(Node *&root)
{
    int Data;
    cout << "Enter the data = ";
    cin >> Data;

    while (Data != -1)
    {
        Insert_BST(root, Data);
        cin >> Data;
    }
}

void Level_Order_Traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> Ans;
    Ans.push(root);
    Ans.push(NULL);

    while (!Ans.empty())
    {
        Node *Front = Ans.front();
        Ans.pop();

        if (Front == NULL)
        {
            cout << endl;
            if (!Ans.empty())
            {
                Ans.push(NULL);
            }
        }
        else
        {
            cout << Front->Data << " ";
            if (Front->left)
            {
                Ans.push(Front->left);
            }
            if (Front->right)
            {
                Ans.push(Front->right);
            }
        }
    }
}

void Inorder_Traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    Inorder_Traversal(root->left);
    cout << root->Data << " ";
    Inorder_Traversal(root->right);
}

void Postorder_Traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    Postorder_Traversal(root->left);
    Postorder_Traversal(root->right);
    cout << root->Data << " ";
}

void Preorder_Traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->Data << " ";
    Preorder_Traversal(root->left);
    Preorder_Traversal(root->right);
}

void Min_Max_Tree(Node *root)
{
    Node *Temp = root;

    while (Temp->left != NULL)
    {
        Temp = Temp->left;
    }
    cout << "Minimum value in tree is " << Temp->Data << endl;

    Temp = root;

    while (Temp->right != NULL)
    {
        Temp = Temp->right;
    }
    cout << "Maximum value in tree is " << Temp->Data << endl;
}
Node *Max_Tree(Node *root)
{
    Node *Temp = root;

    while (Temp->right != NULL)
    {
        Temp = Temp->right;
    }
    return Temp;
}

Node *Min_Tree(Node *root)
{
    Node *Temp = root;

    while (Temp->left != NULL)
    {
        Temp = Temp->left;
    }
    return Temp;
}

void Inorder_Successor(Node *root, int Val)
{
    if (root == NULL)
    {
        cout << "There is no successor" << endl;
        return;
    }

    int Ele = -1;
    Node *Temp = root;

    while (Temp != NULL)
    {
        if (Temp->Data > Val)
        {
            Ele = Temp->Data;
            Temp = Temp->left;
        }
        else
        {
            Temp = Temp->right;
        }
    }

    cout << "Indorder successor of " << Val << " is " << Ele << endl;
}

void Inorder_Predecessor(Node *root, int Val)
{
    if (root == NULL)
    {
        cout << "There is no Inorder predecessor" << endl;
        return;
    }

    Node *Temp = root;
    int Ele = -1;

    while (Temp != NULL)
    {
        if (Temp->Data < Val)
        {
            Ele = Temp->Data;
            Temp = Temp->right;
        }
        else
        {
            Temp = Temp->left;
        }
    }

    cout << "Inroder predecessor of " << Val << " is " << Ele << endl;
}

Node *Delete_Node(Node *root, int Val)
{
    if (root == NULL)
    {
        return root;
    }

    cout << "!!!!" << endl;
    if (root->Data == Val)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left != NULL && root->right == NULL)
        {
            Node *Temp = root->left;
            delete root;
            return Temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            Node *Temp = root->right;
            delete root;
            return Temp;
        }
        if (root->left != NULL && root->right != NULL)
        {
            Node *Min_Node = Min_Tree(root->right);
            root->Data = Min_Node->Data;
            root->right = Delete_Node(root->right, Min_Node->Data);
            return root;
        }
    }

    if (root->Data > Val)
    {
        root->left = Delete_Node(root->left, Val);
        return root;
    }

    root->right = Delete_Node(root->right, Val);
    return root;
}