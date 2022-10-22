// Name: Avinash R Changrani
// Roll no: CS20B1044
// Question: Good Number

#include <iostream>
#include <vector>
using namespace std;

#pragma GCC optimize("Ofast")

void solve()
{
    int n, k;
    cin >> n >> k;
    string s, result, temp;
    cin >> s;
    result = s;
    // a counter array that keeps track of occurrence of digits between 0 and 9
    vector<int> counter(10, 0);
    for (auto ch : s)
        counter[ch - '0']++;
    // initialising the result to a large number
    int res = 1e9;
    // choosing the target digit between 0 and 9 which will have the frequency of k
    for (int i = 0; i < 10; i++)
    {
        int count = counter[i], minimum = 0;
        temp = s;
        char ch = i + '0';
        // going from 1 to 9 offset
        for (int j = 1; j < 10 && count < k; j++)
        {
            // if the target can be obtained by subtracting from given char, we greedily go from first to last as we're decreasing the number(lexicographically min)
            if (ch + j <= '9')
            {
                for (int l = 0; l < n && count < k; l++)
                {
                    if (temp[l] == ch + j)
                    {
                        minimum += j;
                        temp[l] = ch;
                        count++;
                    }
                }
            }
            // if the target can be obtained by adding from given char, we greedily go from last to first as we're increasing the number(lexicographically min)
            if (ch - j >= '0')
            {
                for (int l = n - 1; l >= 0 && count < k; l--)
                {
                    if (temp[l] == ch - j)
                    {
                        minimum += j;
                        temp[l] = ch;
                        count++;
                    }
                }
            }
        }
        // if number of moves required  this iteration is less than min change res to min and store the result
        if (minimum < res)
        {
            res = minimum;
            result = temp;
        }
        // if number of moves is min and we obtain a better lexicographical string, we store it in result
        if (res == minimum && temp < result)
        {
            result = temp;
        }
    }
    cout << res << "\n";
    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}

// Explaination
// O(100*n) Solution
/*
 * It is a brute force solution where we choose the target digit and offset and see if we can get the min lexicographical string each iteration
 * We print the best after all iterations.
 */
