#include <iostream>
#include "Linked_List.cpp"

using namespace std;

void Detect_Loop(Node *Head)
{
    if (Head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
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
            break;
        }
    }
    Slow = Head;
    while (Slow != Fast)
    {
        Slow = Slow->next;
        Fast = Fast->next;
    }
    cout << Slow->Data << " is the starting point of circular loop " << endl;
}

void Remove_Loop(Node *Head, Node *&Tail)
{
    if (Head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
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
            break;
        }
    }
    cout << "Done" << endl;
    Slow = Head;
    while (Slow != Fast->next)
    {
        Slow = Slow->next;
        Fast = Fast->next;
    }
    Fast->next = NULL;
    Tail = Fast;
}

// bool Detect_Loop(Node *Head)
// {
//    if(Head==NULL)
//    {
//         return NULL;
//    }
//     Node *Slow = Head;
//     Node *Fast = Head;
//     while (Slow != NULL && Fast != NULL)
//     {
//         Fast = Fast->next;
//         if (Fast != NULL)
//         {
//             Fast = Fast->next;
//         }

//         Slow = Slow->next;
//         if (Slow == Fast)
//         {
//             cout<<"\n Element in which they meet is "<<Slow->Data<<endl;
//             return true;
//         }
//     }
//     return false;
// }

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

    Tail->next = Head->next->next->next;

    // bool Ans = Detect_Loop(Head);
    Head = NULL;
    Detect_Loop(Head);

    Remove_Loop(Head, Tail);

    // cout<<Head->Data<<" "<<Tail->Data<<endl;
    Print_List(Head);

    // if (Ans)
    // {
    //     cout << "Linked list is circular" << endl;
    // }
    // else
    // {
    //     cout << "Linked list is not circular" << endl;
    // }

    return 0;
}