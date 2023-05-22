#include <iostream>

using namespace std;

class Trie_Node
{
public:
    char data;
    Trie_Node *Children[26];
    bool Is_Terminal = false;

    Trie_Node(char data)
    {
        this->data = data;
        for (int i = 0; i < 26; i++)
        {
            Children[i] = NULL;
        }
    }
};

class Trie
{
public:
    Trie_Node *root;
    Trie()
    {
        root = new Trie_Node('\0');
    }

    void Insert(Trie_Node *root, string Word)
    {
        if (Word.length() == 0)
        {
            root->Is_Terminal = true;
            return;
        }

        int Ind = Word[0] - 'a';
        Trie_Node *Child;

        if (root->Children[Ind] != NULL)
        {
            Child = root->Children[Ind];
        }
        else
        {
            Child = new Trie_Node(Word[0]);
            root->Children[Ind] = Child;
        }

        root->Is_Terminal = true;
        Insert(Child, Word.substr(1));
    }

    void Insert_Word(string Word)
    {
        Insert(root, Word);
    }

    bool Search(Trie_Node *root, string Word)
    {
        if (Word.length() == 0)
        {
            return root->Is_Terminal;
        }

        int Ind = Word[0] - 'a';
        Trie_Node *Child;

        if (root->Children[Ind] != NULL)
        {
            Child = root->Children[Ind];
        }
        else
        {
            return false;
        }

        return Search(Child, Word.substr(1));
    }

    bool Search_Word(string Word)
    {
        return Search(root, Word);
    }
};

int main()
{
    Trie *root = new Trie();
    root->Insert_Word("abcd");
    root->Insert_Word("abd");
    root->Insert_Word("abdc");

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