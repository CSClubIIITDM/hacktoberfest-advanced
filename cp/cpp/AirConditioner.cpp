// Name: Avinash R Changrani
// Roll no: CS20B1044
// Question: Air Conditioner

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#pragma GCC optimize("Ofast")

void solve()
{
    int n, m;
    cin >> n >> m;
    // for storing the max temperature and min temperature os that we can see if the student can have the desired range (intialised to intialised to intial temperature)
    // and prev for storing prev time(starting from 0 initially)
    int min_t = m, max_t = m, prev = 0;
    int t[n], l[n], h[n];
    // a boolean for seeing if all students can get their desire range at the time of their arrival
    bool flag = true;
    for (int i = 0; i < n; i++)
        cin >> t[i] >> l[i] >> h[i];
    for (int i = 0; i < n; i++)
    {
        // how much we can increase the max based on time difference between current and previous student
        max_t += t[i] - prev;
        // how much we can decrease the min temperature based on time difference between current and previous student
        min_t -= t[i] - prev;
        // if we're unable to get the desired range within our current max range, we break and print NO
        if (max_t < l[i] || min_t > h[i])
        {
            flag = false;
            break;
        }
        // contract the range to match the student's temperature range by finding the intersection
        max_t = min(max_t, h[i]);
        min_t = max(min_t, l[i]);
        // store the current arrival time of student in prev
        prev = t[i];
    }
    // print yes if we can satisfy all the desired temperature ranges for all students at time of arrival
    cout << (flag ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// O(n) Solution
/*
By Traversing, we find range that can satisy all students, if we're unable to satisfy any student at the time of arrival. We just print NO, else YES.
It is a greedy Solution where we to try to maximize the possible/desired range for each student when they arrive.
*/
