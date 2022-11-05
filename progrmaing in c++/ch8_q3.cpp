#include <iostream>
#include <cstring>

using namespace std;

class Staff
{
    char *code_name;

public:
    Staff(char *code)
    {
        code_name = new char[sizeof(code) + 1];
        strcpy(code_name, code);
    }
    void display_code(void)
    {
        cout << "Code name is " << code_name << endl;
    }
};

class Teacher : public Staff
{
    int sub_pub;

public:
    Teacher(char *code, int sub_pub) : Staff(code)
    {
        this->sub_pub = sub_pub;
    }
    void display_sub_pub(void)
    {
        cout << "Number of subject publication are " << sub_pub << endl;
    }
};

class Officer : public Staff
{
    int batch;

public:
    Officer(char *code, int batch) : Staff(code)
    {
        this->batch = batch;
    }
    void display_batch(void)
    {
        cout << "Rank of the batch is " << batch << endl;
    }
};

class Typist : public Staff
{
    int speed;

public:
    Typist(char *code, int speed) : Staff(code)
    {
        this->speed = speed;
    }

    void display_speed(void)
    {
        cout << "Speed of the typist is " << speed << endl;
    }
};

class Casual : public Typist
{
    int daily_wages;

public:
    Casual(char *code, int speed, int daily_wages) : Typist(code, speed)
    {
        this->daily_wages = daily_wages;
    }

    void display_daily_wages(void)
    {
        cout << "Daily wages of the worker is " << daily_wages << endl;
    }
};

int main()
{
    return 0;
}