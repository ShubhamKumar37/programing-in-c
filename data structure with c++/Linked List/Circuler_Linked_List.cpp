#include <iostream>

using namespace std;

class Node
{
public:
    int Data;
    Node *next;
    Node(int Data)
    {
        this->Data = Data;
        this->next = NULL;
    }

    ~Node()
    {
        int Val = this->Data;
        if (this->next != NULL)
        {
            this->next = NULL;
            delete next;
        }
        cout << "Memory is free for value " << Val << endl;
    }
}

int
main()
{

    return 0;
}