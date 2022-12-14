#include <IOSTREAM>

using namespace std;

template <class Type>
#define T template <class Type>

class Node;
void Insert(Node<Type> *&Head, Type d);

class Node
{
public:
    Type data;
    Node<Type> *next;
    Node(Type data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int Val = this->data;
        cout << "Deleted node have data = " << Val << endl;
    }
};

T class Queue 
{
    Type F = 0, B = 0;

public:
    Queue() {}
    Queue(int data)
    {
        Insert(NULL, data);
    }

    Type Pop(void);
    Type Back(void);
    Type Front(void);
    int Length(void);
    bool Empty(void);
    bool Full(void);
    void Push(Type Data);
};

int main()
{

    return 0;
}

T void Insert(Node<Type> *&Head, Type d)
{
    Node<Type> *Temp = new Node<Type>(d);
    if (Head == NULL)
    {
        Head = Temp;
        return ;
    }
    Temp->next = Head;
    Head = Temp;
}

T Type Delete(Node<Type> *Head)
{
    if (Head == NULL || Head->next == NULL)
    {
        return Head == NULL ? NULL : Head->data;
    }

    Node<Type> *Temp = Head;
    while (Temp->next->next != NULL)
    {
        Temp = Temp->next;
    }
    Node<Type> *T_Delete = Temp->next;
    Temp->next = NULL;
    return T_Delete->data;
}

// PS D:\programing in c\data structure with c++\Queue> cd "d:\programing in c\data structure with c++\Queue\" ; if ($?) { g++ Queue_Implementation_Linked_List.cpp -o Queue_Implementation_Linked_List } ; if ($?) { .\Queue_Implementation_Linked_List }
// Queue_Implementation_Linked_List.cpp:7:6: error: variable or field 'Insert' declared void        
//     7 | void Insert(Node<Type> *&Head, Type d);
//       |      ^~~~~~
// Queue_Implementation_Linked_List.cpp:7:13: error: 'Node' was not declared in this scope
//     7 | void Insert(Node<Type> *&Head, Type d);
//       |             ^~~~
// Queue_Implementation_Linked_List.cpp:7:22: error: expected primary-expression before '>' token   
//     7 | void Insert(Node<Type> *&Head, Type d);
//       |                      ^
// Queue_Implementation_Linked_List.cpp:7:26: error: 'Head' was not declared in this scope
//     7 | void Insert(Node<Type> *&Head, Type d);
//       |                          ^~~~
// Queue_Implementation_Linked_List.cpp:7:37: error: expected primary-expression before 'd'
//     7 | void Insert(Node<Type> *&Head, Type d);
//       |                                     ^
// Queue_Implementation_Linked_List.cpp:29:1: error: expected class-name before '{' token
//    29 | {
//       | ^
// Queue_Implementation_Linked_List.cpp: In constructor 'Queue<Type>::Queue(int)':
// Queue_Implementation_Linked_List.cpp:36:9: error: there are no arguments to 'Insert' that depend on a template parameter, so a declaration of 'Insert' must be available [-fpermissive]
//    36 |         Insert(NULL, data);
//       |         ^~~~~~
// Queue_Implementation_Linked_List.cpp:36:9: note: (if you use '-fpermissive', G++ will accept your code, but allowing the use of an undeclared name is deprecated)
// Queue_Implementation_Linked_List.cpp: At global scope:
// Queue_Implementation_Linked_List.cpp:66:15: error: template placeholder type 'Node<...auto...>' must be followed by a simple declarator-id
//    66 | T Type Delete(Node *Head)
//       |               ^~~~
// Queue_Implementation_Linked_List.cpp:10:9: note: 'template<class Type> class Node' declared here 
//    10 | T class Node
//       |         ^~~~
// Queue_Implementation_Linked_List.cpp: In function 'Type Delete(...)':
// Queue_Implementation_Linked_List.cpp:68:9: error: 'Head' was not declared in this scope
//    68 |     if (Head == NULL || Head->next == NULL)
//       |         ^~~~
// Queue_Implementation_Linked_List.cpp:73:5: error: template placeholder type 'Node<...auto...>' must be followed by a simple declarator-id
//    73 |     Node *Temp = Head;
//       |     ^~~~
// Queue_Implementation_Linked_List.cpp:10:9: note: 'template<class Type> class Node' declared here 
//    10 | T class Node
//       |         ^~~~
// Queue_Implementation_Linked_List.cpp:73:18: error: 'Head' was not declared in this scope
//    73 |     Node *Temp = Head;
//       |                  ^~~~
// Queue_Implementation_Linked_List.cpp:74:12: error: 'Temp' was not declared in this scope
//    74 |     while (Temp->next->next != NULL)
//       |            ^~~~
// Queue_Implementation_Linked_List.cpp:78:5: error: template placeholder type 'Node<...auto...>' must be followed by a simple declarator-id
//    78 |     Node *T_Delete = Temp->next;
//       |     ^~~~
// Queue_Implementation_Linked_List.cpp:10:9: note: 'template<class Type> class Node' declared here 
//    10 | T class Node
//       |         ^~~~
// Queue_Implementation_Linked_List.cpp:78:22: error: 'Temp' was not declared in this scope
//    78 |     Node *T_Delete = Temp->next;
//       |                      ^~~~
// Queue_Implementation_Linked_List.cpp:80:12: error: 'T_Delete' was not declared in this scope; did you mean 'Delete'?
//    80 |     return T_Delete->data;
//       |            ^~~~~~~~
//       |            Delete