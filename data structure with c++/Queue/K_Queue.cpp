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