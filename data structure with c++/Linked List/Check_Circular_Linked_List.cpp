#include <iostream>
#include "Circuler_Linked_List.cpp"

using namespace std;

bool Check_Circular(Node *Tail)
{
    if (Tail == NULL || Tail->next == NULL)
    {
        return 0;
    }

    Node *Temp = Tail;
    do
    {
        if (Temp->next == NULL)
        {
            return 0;
        }
        Temp = Temp->next;
    } while (Temp != Tail);

    return Temp == Tail ? 1 : 0;
}

int main()
{
    Node *A = new Node(40);
    Node *Tail = A;

    Insertion_Ele(Tail, 40, 50);
    Node *Temp = Tail;
    Print_List(Tail);
    Insertion_Ele(Tail, 40, 80);
    Print_List(Tail);
    Insertion_Ele(Tail, 40, 60);
    Print_List(Tail);

    int Ans=Check_Circular(Tail);

    if(Ans)
    {
        cout<<"Linked list is circular "<<endl;
    }
    else
    {
        cout<<"Linked list is not circular "<<endl;
    }

    return 0;

    // Print_List(Tail);
}