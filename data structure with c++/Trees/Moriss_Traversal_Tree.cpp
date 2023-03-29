#include<iostream>
#include<vector>
#include<stack>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int> Ans;
        
        if(root == NULL)
        {
            return Ans;
        }
        
        Node* Curr = root;
        
        while(Curr != NULL)
        {
            if(Curr -> left == NULL)
            {
                Ans.push_back(Curr -> data);
                Curr = Curr -> right;
            }
            else
            {
                Node* Pred = Curr -> left;
                while(Pred -> right != NULL && Pred -> right != Curr)
                {
                    Pred = Pred -> right;
                }
                
                if(Pred -> right == NULL)
                {
                    Pred -> right = Curr;
                    Curr = Curr -> left;
                }
                else
                {
                    Pred -> right = NULL;
                    Ans.push_back(Curr -> data);
                    Curr = Curr -> right;
                }
            }
        }
        
        return Ans;
    }
};

vector<int> inOrder(Node* root)
{
    //code here
    vector<int> Ans;
    stack<Node*> S;
    
    Node* Temp = root;
        
    while(Temp != NULL || !S.empty())
    {
        while(Temp != NULL)
        {
            S.push(Temp);
            Temp = Temp -> left;
        }
        
        Node* Curr = S.top();
        Ans.push_back(Curr -> data);
        Temp = Curr -> right;
        S.pop();
    }
        
    return Ans;
}