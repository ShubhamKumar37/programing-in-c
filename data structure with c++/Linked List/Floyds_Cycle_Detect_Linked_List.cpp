#include <iostream>
#include "Linked_List.cpp"

using namespace std;

bool Detect_Loop(Node *Head)
{
    Node *Slow = Head;
    Node *Fast = Head;
    while (Slow != NULL && Fast != NULL)
    {
        Fast = Fast->next;
        if (Fast != NULL)
        {
            Fast = Fast->next;
        }

        Slow = Slow->next;
        if (Slow == Fast)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *A = new Node(50);
    Node *Head = A;
    Node *Tail = A;

    Push_Front(Head, Tail, 40);
    Push_Front(Head, Tail, 20);

    Push_Back(Head, Tail, 60);
    Push_Back(Head, Tail, 80);

    Push_Middle(Head, Tail, 10, 1);
    Push_Middle(Head, Tail, 15, 2);
    Push_Middle(Head, Tail, 100, 8);

    Print_List(Head);

    cout << Head->Data << " " << Tail->Data << endl;

    // Tail->next = Head->next->next;

    bool Ans = Detect_Loop(Head);
    if (Ans)
    {
        cout << "Linked list is circular" << endl;
    }
    else
    {
        cout << "Linked list is not circular" << endl;
    }

    return 0;
}