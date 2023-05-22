#include<iostream>

using namespace std;

class Trie_Node
{
    public:
    char data;
    Trie_Node* Children[26];
    bool Is_Reached = false;

    Trie_Node(char data)
    {
        this -> data = data;
        for(int i = 0; i < 26; i++)
        {
            Children[i] = NULL;
        }
    }
};

class Trie
{
    public:
    Trie_Node *root;
    Trie(void)
    {
        root = new Trie_Node('\0');
    }

    void Insert(Trie_Node *root, string Word)
    {
        Trie_Node *Child = root;

        for(char i : Word)
        {
            int Ind = i - 'a';
            if(Child -> Children[Ind] == NULL)
            {
                Child -> Children[Ind] = new Trie_Node(i);
            }

            Child = Child -> Children[Ind];
        }

        Child -> Is_Reached = true;
        // if(Word.length() == 0)
        // {
        //     root -> Is_Reached = true;
        //     return ;
        // }

        // int Ind = Word[0] - 'a';
        // Trie_Node *Child;

        // if(root -> Children[Ind] != NULL)
        // {
        //     Child = root -> Children[Ind];
        // }
        // else
        // {
        //     Child = new Trie_Node(Word[0]);
        //     root -> Children[Ind] = Child;
        // }

        // Insert(Child, Word.substr(1));
    }
    void Insert_Word(string Word)
    {
        Insert(root, Word);
    }

    bool Search(Trie_Node *root, string Word)
    {
        Trie_Node *Child = root;

        for(char i : Word)
        {
            int Ind = i - 'a';
            if(Child -> Children[Ind] == NULL)
            {
                return false;
            }
            Child = Child -> Children[Ind];
        }

        return true;
        // if(Word.length() == 0)
        // {
        //     return root -> Is_Reached;
        // }
        
        // int Ind = Word[0] - 'a';
        // Trie_Node *Child;

        // if(root -> Children[Ind] != NULL)
        // {
        //     Child = root -> Children[Ind];
        // }
        // else 
        // {
        //     return false;
        // }

        // return Search(Child, Word.substr(1));
    }
    bool Search_Word(string Word)
    {
        return Search(root, Word);
    }

    // void Remove_Word(Trie_Node *root, string Word)
    // {
    //     if(Word.length() == 0)
    //     {
    //         if(root -> Is_Reached)
    //         {
    //             root -> Is_Reached == false;
    //             int Ind = root -> Children[]
    //         }
    //     }
    // }
    // void Remove(string Word)
    // {
    //     Remove_Word(root, Word);
    // }
};


int main()
{

    Trie *root = new Trie();
    root -> Insert_Word("abcd");
    root -> Insert_Word("abd");
    root -> Insert_Word("abdc");

    bool Available = root->Search_Word("abdc");

    if (Available)
    {
        cout << "String is founded " << endl;
    }
    else
    {
        cout << "String is not founded " << endl;
    }
    return 0;
}
