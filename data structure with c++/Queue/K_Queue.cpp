#include <iostream>

using namespace std;

class K_Queue
{
public:
    int *Arr;
    int *Front;
    int *Rear;
    int *Next;
    int Free_Spot;
    int Size;
    int N;

    K_Queue(int N, int Size)
    {
        this->N = N;
        this->Size = Size;
        Arr = new int[Size];
        Next = new int[Size];
        Front = new int[N];
        Rear = new int[N];

        for (int i = 0; i < Size; i++)
        {
            Next[i] = i + 1;
        }
        Next[Size - 1] = -1;

        for (int i = 0; i < N; i++)
        {
            Front[i] = -1;
            Rear[i] = -1;
        }

        Free_Spot = 0;
    }

    void Enqueue(int Data, int N)
    {
        if (Free_Spot == -1)
        {
            cout << "Push is not possible queue is full" << endl;
            return;
        }

        int Ind = Free_Spot;
        Free_Spot = Next[Ind];

        if (Front[N - 1] == -1)
        {
            Front[N - 1] = Ind;
        }
        else
        {
            Next[Rear[N - 1]] = Ind;
        }

        Next[Ind] = -1;
        Rear[N - 1] = Ind;
        Arr[Ind] = Data;
    }

    int Dequeue(int N)
    {
        if (Front[N - 1] == -1)
        {
            cout << "Pop is not possible queue is empty" << endl;
            return -1;
        }

        int Ind = Front[N - 1];
        Front[N - 1] = Next[Ind];
        Next[Ind] = Free_Spot;
        Free_Spot = Ind;

        return Arr[Ind];
    }
};

int main()
{

    return 0;
}

// class K_Queue
// {
//     public:
//     int *Arr;
//     int *Next;
//     int *Front;
//     int *Rear;
//     int Free_Spot;
//     int Size;

//     K_Queue(int N, int Size)
//     {
//         this -> Size = Size;
//         Arr = new int[Size];
//         Next = new int[Size];
//         Front = new int[N];
//         Rear = new int[N];

//         for(int i=0; i<Size; i++)
//         {
//             Next[i] = i + 1;
//         }
//         Next[Size - 1] = -1;
  
//         for(int i=0; i<N; i++)
//         {
//             Front[i] = -1;
//             Rear[i] = -1;
//         }
//     }

//     void Enqueue(int Data, int N)
//     {
//         if(Free_Spot == -1)
//         {
//             cout << "Push is not possible queue is full" << endl;
//             return ;
//         }

//         int Ind = Free_Spot;
//         if(Front[Ind] == -1)
//         {
//             Front[Ind] = Ind;
//         }
//         else
//         {
//             Next[Rear[N - 1]] = Ind;
//         }

//         Next[Ind] = -1;
//         Rear[N - 1] = Ind;
//         Arr[Ind] = Data;
//         return ;
//     }

//     int Dequeue(int N)
//     {
//         if(Front[N - 1] == -1)
//         {
//             cout << "Pop is not possible queue is empty" << endl;
//             return -1;
//         }

//         int Ind = Front[N - 1];
//         Front[N - 1] = Next[Ind];
//         Next[Ind] = Free_Spot;
//         Free_Spot = Ind;
//         return Arr[Ind];
//     }
// };

#include <bits/stdc++.h> 
class NQueue{
public:
    // Initialize your data structure.
    int *Arr;
    int *Next;
    int *Front;
    int *Rear;
    int Free_Spot;
    int Size;

    NQueue(int n, int s){
        // Write your code here.
        Size = s;
        Arr = new int[Size];
        Next = new int[Size];
        Front = new int[n];
        rear = new int[n];

        for(int i=0; i<Size; i++)
        {
            Next[i] = i + 1;
        }
        Next[Size - 1] = -1;

        for(int i=0; i<n; i++)
        {
            Front[i] = -1;
            Rear[i] = -1;
        }
    }

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        // Write your code here.
        if(Free_Spot == -1)
        {
            return false;
        }

        int Ind = Free_Spot;
        Free_Spot = Next[Ind];

        if(Front[m - 1] == -1)
        {
            Front[m - 1] = Ind;
        }
        else
        {
            Next[Rear[m - 1]] = Ind;
        }

        Next[Ind] = -1;
        Rear[m - 1] = Ind;
        Arr[Ind] = x;

        return true;
    }


    // Dequeues top element from Mth queue. Returns -1 if the queue is empty, otherwise returns the popped element.
    int dequeue(int m){
        // Write your code here.
        if(Front[m - 1] == -1)
        {
            return -1;
        }

        int Ind = Front[m - 1];
        Front[m - 1] = Next[Ind];
        Next[Ind] = Free_Spot;
        Free_Spot = Ind;

        return Arr[Ind];
    }
};