#include <iostream>

using namespace std;

class Heap
{
public:
    int *Arr;
    int Size;
    int Ind;

    Heap(int Size)
    {
        this -> Size = Size;
        Arr = new int[Size];
        Ind = 0;
        Arr[Ind++] = -1;
    }

    void Print_Heap(void);
    void Insertion(int Ele);
};

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
    
    // cout<<A.Arr[0]<<endl;

    return 0;
}

void Heap :: Insertion(int Ele)
{
    Arr[Ind++] = Ele;
    int i = Ind - 1;

    while (i > 1)
    {
        int Parent = i >> 1;
        if (Ele > Arr[Parent])
        {
            swap(Arr[i], Arr[Parent]);
            i = Parent;
        }
        else
        {
            return;
        }
    }
}

void Heap :: Print_Heap(void)
{
    for (int i = 1; i < Ind; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}