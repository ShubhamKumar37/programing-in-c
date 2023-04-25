#include <iostream>

using namespace std;

class Heap
{
    public:
    int Ind;
    int Size;
    int *Arr;

    Heap(int Size)
    {
        this -> Size = Size;
        Ind = 0;
        Arr = new int[Size];
    }
    void Insertion(int Ele)
    {
        if(Ind < 0)
        {
            cout << "Insertion is not possible" << endl;
            return ;
        }

        Arr[++Ind] = Ele;
        int i = Ind;
        while(i > 1)
        {
            int Parent = i >> 1;
            if(Arr[Parent] < Arr[Ind])
            {
                swap(Arr[Parent], Arr[Ind]);
                i = Parent;
            }
            else
            {
                return ;
            }
        }
    }

    void Print_Heap(void)
    {
        for (int i = 1; i <= Ind; i++)
        {
            cout << Arr[i] << " ";
        }
        cout << endl;
    }
    void Delete_Ele(void)
    {
        Arr[1] = Arr[Ind--];
        int i = 1;
        while(i < Ind)
        {
            int Left = i * 2;
            int Right = i * 2 + 1;
            if(Left <= Ind && Arr[Left] > Arr[i])
            {
                swap(Arr[Left], Arr[i]);
                i = Left;
            }
            else if(Right <= Ind && Arr[Right] > Arr[i])
            {
                swap(Arr[Right], Arr[i]);
                i = Right;
            }
            else
            {
                return ;
            }
        }
    }
};

// class Heap
// {
// public:
//     int *Arr;
//     int Size;
//     int Ind;

//     Heap(int Size)
//     {
//         this -> Size = Size;
//         Arr = new int[Size];
//         Ind = 0;
//         Arr[Ind++] = -1;
//     }

//     void Print_Heap(void);
//     void Insertion(int Ele);
//     void Delete_Ele(void);
// };

// void Heapify(int *Arr, int n, int i)
// {
//     int Largest = i;
//     int Left = i * 2;
//     int Right = i * 2 + 1;

//     if(Left < n && Arr[Largest] < Arr[Left])
//     {
//         Largest = Left;
//     }
//     else if(Right < n && Arr[Largest] < Arr[Right])
//     {
//         Largest = Right;
//     }

//     if(Largest != i)
//     {
//         swap(Arr[i], Arr[Largest]);
//         Heapify(Arr, n, Largest);
//     }
// }

int main()
{
    Heap A(10);
    A.Insertion(90);
    A.Insertion(34);
    A.Insertion(65);
    A.Insertion(12);
    A.Insertion(92);
    A.Insertion(100);

    A.Print_Heap();

    A.Delete_Ele();
    
    cout<<endl;
    A.Print_Heap();
    // cout<<A.Arr[0]<<endl;
    // int Num[] = {-1, 54, 53, 55, 52, 50};
    // int N = sizeof(Num) / sizeof(int);

    // for(int i=N/2; i>0; i--)
    // {
    //     Heapify(Num, N, i);
    // }
    
    // for(int i=0; i<N; i++)
    // {
    //     cout<<Num[i]<<" ";
    // }

    return 0;
}

// void Heap :: Delete_Ele(void)
// {
//     if(Ind == 0)
//     {
//         cout<<"Deleation is not possible as heap is empty " <<endl;
//         return ;
//     }

//     Arr[1] = Arr[--Ind];
//     int i = 1;

//     while(i < Ind)
//     {
//         int Left_Ele = i * 2;
//         int Right_Ele = i * 2 + 1;

//         if(Left_Ele < Ind && Arr[Left_Ele] > Arr[i])
//         {
//             swap(Arr[i], Arr[Left_Ele]);
//             i = Left_Ele;
//         }
//         else if(Right_Ele < Ind && Arr[Right_Ele] > Arr[i])
//         {
//             swap(Arr[i], Arr[Right_Ele]);
//             i = Right_Ele;
//         }
//         else
//         {
//             return ;
//         }
//     }
// }


// void Heap :: Insertion(int Ele)
// {
//     Arr[Ind++] = Ele;
//     int i = Ind - 1;

//     while (i > 1)
//     {
//         int Parent = i >> 1;
//         if (Ele > Arr[Parent])
//         {
//             swap(Arr[i], Arr[Parent]);
//             i = Parent;
//         }
//         else
//         {
//             return;
//         }
//     }
// }

// void Heap :: Print_Heap(void)
// {
//     for (int i = 1; i < Ind; i++)
//     {
//         cout << Arr[i] << " ";
//     }
//     cout << endl;
// }
