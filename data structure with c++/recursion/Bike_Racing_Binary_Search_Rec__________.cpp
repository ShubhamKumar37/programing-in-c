#include <iostream>

using namespace std;

int Time_Blow_Alarm(int Speed_I[], int Acceleration[], int MTL, int MFB, int S, int E, int N)
{
    if (S <= E)
    {
        int Mid = (S + E) >> 1;
        int Sum_Fast = 0;
        for (int i = 0; i < N; i++)
        {
            if (Speed_I[i] + Acceleration[i] * Mid > MFB)
            {
                Sum_Fast += Speed_I[i] + Acceleration[i] * Mid;
            }
        }
        if (Sum_Fast < MTL)
        {
            return Time_Blow_Alarm(Speed_I, Acceleration, MTL, MFB, Mid + 1, E, N);
        }
        else
        {
            return Time_Blow_Alarm(Speed_I, Acceleration, MTL, MFB, S, Mid - 1, N);
        }
    }
}

int main()
{
    int Speed_I[] = {50, 30};
    int Acceleration[] = {20, 40};

    int Max_Speed_Time_Limit = 60;
    int Min_Speed_Fast_Biker = 120;
    int Max_Temp = max(Max_Speed_Time_Limit, Min_Speed_Fast_Biker);
    int Length = sizeof(Speed_I) / sizeof(int);

    cout << "After " 
         << Time_Blow_Alarm(Speed_I, Acceleration, 
                            Max_Speed_Time_Limit, Min_Speed_Fast_Biker,
                            0, Max_Temp, Length)
         << " Hr alarm will blow up " << endl;

    return 0;
}