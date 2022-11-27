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

            if (Temp->left )
            {
                Ans.push(Temp->left);
            }
            if (Temp->right )
            {
                Ans.push(Temp->right);
            }
        }
    }
    cout<<endl;
}

void Pre_Traversal(Node* Root)
{
    if(Root==NULL)
    {
        return ;
    }
    cout<<Root->data<<" ";
    Pre_Traversal(Root->left);
    Pre_Traversal(Root->right);
}
void In_Traversal(Node* Root)
{
    if(Root==NULL)
    {
        return ;
    }
    In_Traversal(Root->left);
    cout<<Root->data<<" ";
    In_Traversal(Root->right);
}
void Post_Traversal(Node* Root)
{
    if(Root==NULL)
    {
        return ;
    }
    Post_Traversal(Root->left);
    Post_Traversal(Root->right);
    cout<<Root->data<<" ";
}

Node* Create_Node(int Data)
{
    Node* Root;
    Root->data=Data;
    Root->left=NULL;
    Root->right=NULL;

    return Root;
}

int main()
{

    Node* Root=NULL;
    Root=Creation_Tree(Root);
    cout<<endl;
    Pre_Traversal(Root);
    cout<<endl;
    In_Traversal(Root);
    cout<<endl;
    Post_Traversal(Root);

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