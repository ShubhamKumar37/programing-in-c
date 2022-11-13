#include <iostream>
#include "Doubly_Linked_List.cpp"

using namespace std;

void Reverse_List(Node *&Head, Node *&Tail)
{
    Node *Prev_Node = NULL;
    Node *Curr = Head;
    Tail = Curr;
    while (Curr != NULL)
    {
        Curr->prev = Curr->next;
        Curr->next = Prev_Node;
        Prev_Node = Curr;
        Curr = Curr->prev;
    }
    cout << "Done" << endl;
    Head = Prev_Node;
}

int main()
{

    Node *Head = NULL;
    Node *Tail = NULL;

    Push_Front(Head, Tail, 4);
    Push_Front(Head, Tail, 3);
    Push_Front(Head, Tail, 2);

    Push_Back(Tail, Head, 6);
    Push_Back(Tail, Head, 7);

    Push_Middle(Head, Tail, 100, 2);
    Push_Middle(Head, Tail, 1, 1);
    Push_Middle(Head, Tail, 11, 8);

    Print_List(Head);

    Reverse_List(Head, Tail);

    Print_List(Head);

    cout << Head->Data << endl;
    cout << Tail->Data << endl;
}