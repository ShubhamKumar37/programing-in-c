#include <iostream>
#include <stack>

using namespace std;

class Trie_Node
{
public:
    char data;
    Trie_Node *Children[26];
    bool Is_Reached = false;

    Trie_Node(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            Children[i] = NULL;
        }
    }

    ~Trie_Node()
    {
        for (int i = 0; i < 26; i++)
        {
            delete Children[i];
        }
        cout << "Memory deallocated" << endl;
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

        for (char i : Word)
        {
            int Ind = i - 'a';
            if (Child->Children[Ind] == NULL)
            {
                Child->Children[Ind] = new Trie_Node(i);
            }

            Child = Child->Children[Ind];
        }

        Child->Is_Reached = true;

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

        for (char i : Word)
        {
            int Ind = i - 'a';
            if (Child->Children[Ind] == NULL)
            {
                return false;
            }
            Child = Child->Children[Ind];
        }

        return Child->Is_Reached;

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

    bool Delete(Trie_Node *root, string Word)
    {
        Trie_Node *Child = root;
        stack<Trie_Node *> S;
        for (char i : Word)
        {
            int Ind = i - 'a';
            if (Child->Children[Ind] == NULL)
            {
                return false;
            }
            Child = Child->Children[Ind];
            S.push(Child);
        }

        if (Child->Is_Reached)
        {
            Child->Is_Reached = false;
            while (!S.empty())
            {
                Trie_Node *Top = S.top();
                S.pop();

                int Ind = Word[S.size()] - 'a';
                for (int i = 0; i < 26; i++)
                {
                    if (Top->Children[i] != NULL || Top->Is_Reached)
                    {
                        return false;
                    }
                }

                if (S.size() > 1)
                {
                    S.top()->Children[Ind] = NULL;
                    delete Top;
                }
            }
            return true;
        }
        return false;
    }
    bool Delete_Word(string Word)
    {
        return Delete(root, Word);
    }

    void Traverse(Trie_Node *root, string Ans)
    {
        if (root == NULL)
        {
            return;
        }

        if (root->Is_Reached)
        {
            cout << Ans << endl;
        }

        for (int i = 0; i < 26; i++)
        {
            if (root->Children[i] != NULL)
            {
                char Str = 'a' + i;
                Traverse(root->Children[i], Ans + Str);
            }
        }
    }
    void Traverse_Trie(void)
    {
        Traverse(root, "");
    }
};

int main()
{

    Trie *root = new Trie();
    root->Insert_Word("abcd");
    root->Insert_Word("abd");
    root->Insert_Word("abdc");
    root->Insert_Word("abdcfg");

    bool Available = root->Search_Word("abdcfg");

    if (Available)
    {
        cout << "String is founded " << endl;
    }
    else
    {
        cout << "String is not founded " << endl;
    }
    root->Delete_Word("abdc");
    Available = root->Search_Word("abdc");

    if (Available)
    {
        cout << "String is founded " << endl;
    }
    else
    {
        cout << "String is not founded " << endl;
    }

    Available = root->Search_Word("abdc");
    if (Available)
    {
        cout << "String is founded " << endl;
    }
    else
    {
        cout << "String is not founded " << endl;
    }

    root->Traverse_Trie();
    return 0;
}
