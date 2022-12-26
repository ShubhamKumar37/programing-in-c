#include <iostream>

using namespace std;

class Student
{
    int Roll_No;
    char Name[50];

public:
    void Get_Data(void)
    {
        cout << "Enter the Roll number of the student = ";
        cin >> Roll_No;
        cin.ignore();
        cout << "Enter the name of the student = ";
        cin.getline(Name, 50);
    }
    void Put_data(void)
    {
        cout << "Roll number of the student is " << Roll_No << endl;
        cout << "Name of the student is " << Name << endl;
    }
};

class Exam : public Student
{
protected:
    int Marks[5];
    int Sum = 0;

public:
    void Get_Data(void)
    {
        for (int i = 1; i < 6; i++)
        {
            cout << "Enter the marks of subject " << i << " = ";
            cin >> Marks[i - 1];
            Sum += Marks[i - 1];
        }
    }
};

class Result : public Exam
{
public:
    Result(void)
    {
        Student::Get_Data();
        Exam::Get_Data();
    }
    void Put_Data(void)
    {
        Student::Put_data();
        cout << "Student score " << Sum << " out of 500 " << endl;
    }
};

int main()
{

    Result A;
    A.Get_Data();
    A.Put_Data();

    return 0;
}

// PS D:\programing in c\lab work> cd "d:\programing in c\lab work\" ; if ($?) { g++ Lab5_q3.cpp -o Lab5_q3 } ; if ($?) { .\Lab5_q3 }
// Enter the Roll number of the student = 036
// Enter the name of the student = Shubham Kumar
// Enter the marks of subject 1 = 90
// Enter the marks of subject 2 = 98
// Enter the marks of subject 3 = 89
// Enter the marks of subject 4 = 90
// Enter the marks of subject 5 = 97
// Roll number of the student is 36
// Name of the student is Shubham Kumar
// Student score 464 out of 500