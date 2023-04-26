#include<iostream>

using namespace std;

class Heap
{
    public:
    int Size;
    int *Arr;
    int Ind;
    Heap(int Size)
    {
        this -> Size = Size;
        Arr = new int[Size];
        Ind = 0;
        Arr[Ind] = -1;
    }
    
    void Insertion(int Ele)
    {
        if(Ind >= Size)
        {
            cout << "Insetion is not possible " << endl;
            return ;
        }
        Arr[++Ind] = Ele;
        int i = Ind;

        while(i > 1)
        {
            int Parent = i >> 1;
            if(Arr[Parent] < Arr[i])
            {
                swap(Arr[i], Arr[Parent]);
                i = Parent;
            }
            else
            {
                return ;
            }
        }
    }

    void Deletion(void)
    {
        swap(Arr[1], Arr[Ind--]);
        int i = 1;
        while(i <= Ind)
        {
            int Left = i * 2;
            int Right = i * 2 + 1;

            if(Left < Ind && Arr[Left] < Arr[i])
            {
                swap(Arr[i], Arr[Left]);
                i = Left;
            }
            else if(Right < Ind && Arr[Right] < Arr[i])
            {
                swap(Arr[i], Arr[Right]);
                i = Right;
            }
            else 
            {
                return ;
            }
        }
    }

    void Print_Heap(void)
    {
        for(int i = 0; i < Ind; i++)
        {
            cout << Arr[i] << " ";
        }
    }
};

void Heapify(int Arr[], int N, int i)
{
    int Ind = i;
    int Left = i * 2;
    int Right = i * 2 + 1;

    if(Left <= N && Arr[Ind] < Arr[Left])
    {
        Ind = Left;
    }
    if(Right <= N && Arr[Ind] < Arr[Right])
    {
        Ind = Right;
    }

    if(Ind != i)
    {
        swap(Arr[i], Arr[Ind]);
        Heapify(Arr, N, Ind);
    }
}

void Heap_Sort(int Arr[], int N)
{
    int Ind = N;
    // Method 2;
    while(Ind > 0)
    {
        swap(Arr[1], Arr[Ind--]);

        Heapify(Arr, Ind, 1);
    }
    
    // Method 1;
    // for(int i=N-1; i>0; i--)
    // {
    //     swap(Arr[1], Arr[Ind--]);
    //     Heapify(Arr, Ind, 1);
    // }
}

int main()
{
    Heap A(10);
    A.Insertion(50);
    A.Insertion(10);
    A.Insertion(30);
    A.Insertion(70);
    A.Insertion(90);

    A.Print_Heap();

    int Arr[] = {-1, 10, 23, 5, 17, 32, 8, 13, 29, 11, 20};
    int N = sizeof(Arr) / sizeof(int);

    for(int i=N/2; i>0; i--)
    {
        Heapify(Arr, N - 1, i);
    }

    cout<<endl;
    for(int i=0; i<N; i++)
    {
        cout << Arr[i] << " ";
    }
    Heap_Sort(Arr, N - 1);
    cout<<endl;
    for(int i=0; i<N; i++)
    {
        cout << Arr[i] << " ";
    }
    

    return 0;
}