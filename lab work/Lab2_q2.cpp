#include <iostream>

using namespace std;

class Time
{
    int sec;
    int min;
    int hr;

public:
    Time()
    {
        sec = 0;
        min = 0;
        hr = 0;
    }
    Time(int hr, int min, int sec)
    {
        this->sec = sec;
        this->min = min;
        this->hr = hr;
    }
    void Sum_Time(Time, Time);
    void Display_Time(void);
    ~Time() {}
};

void Time ::Sum_Time(Time a, Time b)
{
    this->sec = a.sec + b.sec;
    this->min = a.min + b.min;
    this->hr = a.hr + b.hr;
    int n = this->sec % 60;
    this->min += this->sec / 60;
    this->sec = n;
    n = this->min % 60;
    this->hr += this->min / 60;
    this->min = n;
}

void Time ::Display_Time(void)
{
    cout << "HR : MIN : SEC" << endl;
    cout << hr << " : " << min << " : " << sec << endl;
}

int main()
{
    Time a(4, 56, 97), b(6, 34, 23), c;
    a.Display_Time();
    b.Display_Time();
    c.Sum_Time(a, b);
    c.Display_Time();

    return 0;
}