#include <iostream>

using namespace std;

class Matrix
{
    int row;
    int col;
    int **mat;

public:
    Matrix(int row, int col)
    {
        this->row = row;
        this->col = col;
        mat = new int *[row];
        for (int i = 0; i < col; i++)
        {
            mat[i] = new int[col];
        }
    }
    void Set_Data(void);
    void Display_Mul(Matrix);
    ~Matrix()
    {
        for(int i=0;i<col;i++)
        {
            delete[] mat[i];
        }
        delete[] mat;
    }
};

void Matrix::Set_Data(void)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "Enter the value of " << i << " , " << j << " = ";
            cin >> mat[i][j];
        }
    }
}

void Matrix ::Display_Mul(Matrix mat1)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int ans = 0;
            for (int k = 0; k < row; k++)
            {
                ans += this->mat[i][k] * mat1.mat[k][j];
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}

int main()
{
    Matrix a1(2, 2), a2(2, 2);
    a1.Set_Data();
    a2.Set_Data();
    a1.Display_Mul(a2);

    return 0;
}