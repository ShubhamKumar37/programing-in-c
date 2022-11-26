#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

void Creation_Tree(Node *& Root)
{
    cout << "Enter the data = ";
    int Data;
    cin >> Data;
    Root=new Node(Data);

    if (Data == -1)
    {
        return ;
    }

    cout << "Enter the data for left skewed !" << endl;
    // Root->left = Creation_Tree(Root->left);
    Creation_Tree(Root->left);

    cout << "Enter the data for right skewed !" << endl;
    Creation_Tree(Root->right);
    // Root->right = Creation_Tree(Root->right);

    return ;
}

int main()
{
    Node *Root = NULL;

    Creation_Tree(Root);

    return 0;
}