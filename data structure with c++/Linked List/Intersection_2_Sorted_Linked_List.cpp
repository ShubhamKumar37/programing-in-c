void Insert(Node *&Tail, int Val)
{
    Node *Temp = new Node(Val);
    Tail->next = Temp;
    Tail = Temp;
}

Node *Intersection(Node *Head1, Node *Head2)
{
    Node *Curr1 = Head1;
    Node *Curr2 = Head2;
    Node *Ans = new Node(-1);
    Node *Tail = Ans;

    while (Curr1 != NULL && Curr2 != NULL)
    {
        if (Curr1->data == Curr2->data)
        {
            Insert(Tail, Curr1->data);
            Curr1 = Curr1->next;
            Curr2 = Curr2->next;
        }

        else if (Curr1->data < Curr2->data && Curr1->next != NULL)
        {
            Curr1 = Curr1->next;
        }
        else if (Curr1->data > Curr2->data && Curr2->next != NULL)
        {
            Curr2 = Curr2->next;
        }
        else
        {
            Curr1 = Curr1->next;
            Curr2 = Curr2->next;
        }
    }
    return Ans->next;
}

Node *findIntersection(Node *Head1, Node *Head2)
{
    // Your Code Here
    if (Head1 == NULL)
    {
        return Head2;
    }
    if (Head2 == NULL)
    {
        return Head1;
    }

    if (Head1->data < Head2->data)
    {
        return Intersection(Head1, Head2);
    }
    return Intersection(Head1, Head2);
}