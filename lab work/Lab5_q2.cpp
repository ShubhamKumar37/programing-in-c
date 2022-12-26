#include <iostream>
#include <string>

using namespace std;

class Basic_Info
{
    int Emp_Id;
    char Name[30];
    char Gender[7];

public:
    void Get_Data(void)
    {
        cout << "Enter the employee id = ";
        cin >> Emp_Id;
        cin.ignore(); // Ignore remaing character on same line in buffer
        cout << "Enter the name of the employee = ";
        cin.getline(Name, 30);

        cout << "Enter the gender of the employee = ";
        cin.getline(Gender, 7);
    }

    void Put_Data(void)
    {
        cout << "Employee id is " << Emp_Id << endl;
        cout << "Name of the employee is " << Name << endl;
        cout << "Gender of the employee is " << Gender << endl;
    }
};

class Depth_Info
{
    char Depth_Name[30];
    char Assign_Work[30];
    int Time_To_Complete;

public:
    void Get_Data(void)
    {
        cout << "Enter the Depth name of the employee = ";
        cin.getline(Depth_Name, 30);

        cout << "Enter the work assign to the employee = ";
        cin.getline(Assign_Work, 30);

        cout << "Enter the amount of time to complete it = ";
        cin >> Time_To_Complete;
    }

    void Put_Data(void)
    {
        cout << "Depth name of the employee is " << Depth_Name << endl;
        cout << "Work assign to employee is " << Assign_Work << endl;
        cout << "Time taken by the employee is " << Time_To_Complete << " hr" << endl;
    }
};

class Employee_Info : public Basic_Info, public Depth_Info
{
    int Salary;
    int Age;

public:
    void Get_Data(void)
    {
        Basic_Info::Get_Data();
        Depth_Info::Get_Data();

        cout << "Enter the salary of the employee = ";
        cin >> Salary;
        cout << "Enter the age of the employee = ";
        cin >> Age;
    }

    void Put_Data(void)
    {
        Basic_Info::Put_Data();
        Depth_Info::Put_Data();

        cout << "Salary of the employee is " << Salary << endl;
        cout << "Age of the employee is " << Age << endl;
    }
};

int main()
{
    Employee_Info C;

    C.Get_Data();
    cout << endl;
    C.Put_Data();

    return 0;
}