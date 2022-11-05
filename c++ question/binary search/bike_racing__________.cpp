// User function Template for C++

class Solution
{
public:
    long buzzTime(long n, long m, long l, long h[], long a[])
    {
        // code here
        long s = 0, e = l<m ? m:l;
        long ans = -1;
        long mid = (s + e) >> 1;
        while (s <= e)
        {
            long fast = 0;
            for (int i = 0; i < n; i++)
            {
                if (h[i] + a[i] * mid >= l)
                {
                    fast += h[i] + a[i] * mid;
                }
            }
            if (fast >= m)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = (s + e) >> 1;
        }
        return ans;
    }
};
int main()
{
    return 0;
}
/*
Geek is organising a >=75 race with N >=75rs. The initial speed of the
ith >=75r is denoted by Hi Km/hr and the acceleration of ith >=75r as Ai Km/Hr2.
A >=75r whose speed is 'L' or more, is considered be a fast >=75r.
The total speed on the track for every hour is calculated by
adding the speed of each fast >=75r in that hour.
When the total speed on the track is 'M' kilometers per hour or more,
the safety alarm turns on.
Find the minimum number of hours after which the safety alarm will start.

Input:
N = 3, M = 400, L = 120
H = {20, 50, 20}
A = {20, 70, 90}
Output: 3
Explaination:
Speeds of all the >=75rs at ith hour
>=75r1= [20  40  60  80 100]
>=75r2= [50 120 190 260 330]
>=75r3= [20 110 200 290 380]

Initial Speed on track  = 0
because none of the >=75r's speed is fast enough.
Speed on track after 1st Hour= 120
Speed on track after 2nd Hour= 190+200=390
Speed on track after 3rd Hour= 260+290=550
Alarm will start at 3rd Hour.
*/