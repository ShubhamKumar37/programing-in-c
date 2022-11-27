#include <iostream>
#include <QUEUE>

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

Node *Creation_Tree(Node *Root)
{
    cout << "Enter the data = ";
    int Data;
    cin >> Data;
    Root = new Node(Data);

    if (Data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for left skewed of !" << Data << endl;
    Root->left = Creation_Tree(Root->left);

    cout << "Enter the data for right skewed of !" << Data << endl;
    Root->right = Creation_Tree(Root->right);

    return Root;
}

void Traversal_Level_Order(Node *Root)
{
    queue<Node *> Ans;
    Ans.push(Root);
    Ans.push(NULL);
    while (!Ans.empty())
    {
        Node *Temp = Ans.front();
        cout << Temp->data << " ";
        Ans.pop();

        if (Temp == NULL)
        {
            cout << endl;
            if (!Ans.empty())
            {
                Ans.push(NULL);
            }
        }
        else
        {

            if (Temp->left)
            {
                Ans.push(Temp->left);
            }
            if (Temp->right)
            {
                Ans.push(Temp->right);
            }
        }
    }
    cout << endl;
}

void Pre_Traversal(Node *Root)
{
    if (Root == NULL)
    {
        return;
    }
    cout << Root->data << " ";
    Pre_Traversal(Root->left);
    Pre_Traversal(Root->right);
}
void In_Traversal(Node *Root)
{
    if (Root == NULL)
    {
        return;
    }
    In_Traversal(Root->left);
    cout << Root->data << " ";
    In_Traversal(Root->right);
}
void Post_Traversal(Node *Root)
{
    if (Root == NULL)
    {
        return;
    }
    Post_Traversal(Root->left);
    Post_Traversal(Root->right);
    cout << Root->data << " ";
}

bool Search_Tree(Node *Root, int K)
{
    if (Root == NULL)
    {
        return 0;
    }
    else if (Root->data == K)
    {
        return 1;
    }
    else if (Root->data < K)
    {
        return Search_Tree(Root->right, K);
    }
    else
    {
        return Search_Tree(Root->left, K);
    }
}

bool Search_Tree_Itr(Node *Root, int K)
{
    while (Root != NULL)
    {
        if (Root->data == K)
        {
            return 1;
        }
        else if (Root->data < K)
        {
            Root = Root->right;
        }
        else
        {
            Root = Root->left;
        }
    }
    return 0;
}

Node *Create_Node(int Data)
{
    Node *Root;
    Root->data = Data;
    Root->left = NULL;
    Root->right = NULL;

    return Root;
}

void Insertion_BST(Node* R,int Key)
{
    Node* Root=R;
    Node* Prev=NULL;
    while(Root!=NULL)
    {
        Prev=Root;
        if(Root->data==Key)
        {
            cout<<"You entered dupicate element !!!!"<<endl;
            return ;
        }
        else if(Root->data<Key)
        {
            Root=Root->right;
        }
        else
        {
            Root=Root->left;
        }
        cout<<"Gaya"<<endl;
    }
    cout<<"Done"<<endl;
    Node* New_Node=new Node(Key);
    // if(Prev->data<Key)
    // {
    //     Root->right=New_Node;
    // }
    // else
    // {
    //     Root->left=New_Node;
    // }
    Root->left=New_Node;
    cout<<"Insertion is complete "<<endl;
}

int main()
{

    Node *Root = NULL;
    Root = Creation_Tree(Root);
    cout << endl;
    Pre_Traversal(Root);
    cout << endl;
    In_Traversal(Root);
    cout << endl;
    Post_Traversal(Root);
    cout << endl;

    cout << "Entered number is find or not " << endl;
    cout << Search_Tree(Root, 345) << endl;
    cout << Search_Tree_Itr(Root, 3) << endl;

    Insertion_BST(Root,2);

    In_Traversal(Root);
    cout << endl;
    // Node *Root= Create_Node(1);
    // Node *L1 = Create_Node(2);
    // Node *R1 = Create_Node(3);
    // Node *L1_1 = Create_Node(4);
    // Node *R1_1 = Create_Node(5);
    // Root->left=L1;
    // Root->right=R1;
    // L1->left=L1_1;
    // R1->left=R1_1;
    // cout<<"Done"<<endl;

    // Root = Creation_Tree(Root);
    // cout<<"Value in root = "<<Root->left->left->data<<endl;
    // Traversal_Level_Order(Root);

    return 0;
}