// QUICK SORT ALGORITHM IS AN IN-PLACE ALGORITHM BECAUSE IT DOESNOT REQUIRED EXTRA SPACE
// AS REQUIRED IN MERGE SORT
// TIME COMPLEXITY WROST CASE= O(N^2) ,BEST AND AVERAGE CASE = O(N LOGN)
// SPACE COMPLEXITY = O(N LOGN) every time a new stack frame is allocated

#include <iostream>

using namespace std;

int Division(int Arr[], int S, int E)
{
    int Pivot_Ele = Arr[S]; // Every time we try to sort first element of the given array
    int Count = 0;          // This is the number of element which are smaller then Pivot_Ele

    for (int i = S + 1; i <= E; i++) // This will give the number of element which are smalle then Pivot_Ele
    {
        if (Arr[i] <= Pivot_Ele) // Due to this Quick sort became unstable because it is considering
                                 // the same value as smaller.
        {
            Count++;
        }
    }
    int Pivot_Corr_Ind = S + Count;    // This is the correct index of Pivot_Ele in array in an sorted array
    swap(Arr[S], Arr[Pivot_Corr_Ind]); // Here the swaping of correct element occur to correct place

    // Now make sure that elements before Pivot_Corr_Ind  and after should be less than and greater than
    // Pivot_Ele
    int i = S, j = E; // Two pointers which will ensure above statment
    while (i < Pivot_Corr_Ind && j > Pivot_Corr_Ind)
    // This condition is for right before and right after element of Pivot_Corr_Ind
    {
        while (Arr[i] < Pivot_Ele) // This move pointer to right side until a bigger element came then Pivot_Ele
        {
            i++;
        }
        while (Arr[j] > Pivot_Ele) // This move pointer to left side until a Smaller element came then Pivot_Ele
        {
            j--;
        }
        if (i < Pivot_Corr_Ind && j > Pivot_Corr_Ind)
        {
            swap(Arr[i++], Arr[j--]); // When both side a element is found which is in wrong side of array
        }
    }

    return Pivot_Corr_Ind;
    // Here we return the correct index so that next time we can sort half of array which is given this time
}

void Quick_Sort(int Arr[], int S, int E)
{
    if (S >= E)
    {
        return;
    }

    int Pivot = Division(Arr, S, E); // This will return correct postion and also place it in the array

    Quick_Sort(Arr, S, Pivot - 1); // This will be the left part of array which will do the same as above

    Quick_Sort(Arr, Pivot + 1, E); // This will be the right part of array which will do same as above

    // Here S=Pivot+1 and E=Pivot-1 because element at Pivot is sorted and palced to correct place
    // In line 14 and 16 ,Line 14 will sort left part and line 16 will sort right part.
}

int main()
{
    int Arr[] = {
        0,
        1,
        11,
        1,
        1,
    };

    int N = sizeof(Arr) / sizeof(int);

    Quick_Sort(Arr, 0, N - 1);

    for (int i = 0; i < N; i++)
    {
        cout << Arr[i] << " ";
    }

    return 0;
}