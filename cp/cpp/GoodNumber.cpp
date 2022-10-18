//Name: Khalid Mohammad
//Roll: EC20B1101
//Question: Good Number

#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, string> &p1, pair<int, string> &p2) { //custom comparator for getting lexographically minimum answer
    if(p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}

void solve(int t, int maxi, int i, vector<int> arr, vector<bool> flag, string s, vector<pair<int, string>> &mp) {
    int k = t-maxi, m=i-1, n=i+1, cost=0;

    while(k>0) {        //changing adjacent digits to minimize the cost
        if(m>=0) {
            if(arr[m] > 0) {
                k -= arr[m];
                cost += (max(arr[m], k) * (i-m));
                flag[m] = true;
                arr[m]-=k;
            }
        }
        m--;
        if(k>0) {
            if(n<10) {
                if(arr[n] > 0) {
                    k -= arr[n];
                    cost += (max(arr[n], k) * (n-i));
                    flag[n] = true;
                    arr[n]-=k;
                }
            }
            n++;
        }
    }
    k = t-maxi;
    for(int j=0; j<s.size(); j++) {
        if(k==0)    break;
        int x = s[j]-'0';
        if(flag[x]) {
            s[j] = i+'0';
            k--;
        }
    }
    mp.push_back({cost, s});
}

void goodNumber(string s, int a, int t) {
    vector<int> arr(10, 0);
    vector<bool> flag(10, 0);
    int maxi = 0;
    for(int i=0; i<s.size(); i++) {
        maxi = max(maxi, ++arr[s[i]-'0']);
    }
    int i=9;
    vector<pair<int, string>> mp;
    for(; i>=0; i--) {
        if(arr[i] == maxi){
            solve(t, maxi, i, arr, flag, s, mp);
        }
    }
    sort(mp.begin(), mp.end(), cmp);
    cout<<mp.begin()->first<<endl;
    cout<<mp.begin()->second;
}

int main() {

    int n, k;
    cin>>n>>k;
    int num;
    cin>>num;

    string s = to_string(num);
    int a = s.size();
    s.insert(0, n-min(n, a), '0');      //for leading zeroes in string
    goodNumber(s, n, k);

    return 0;
}
/*
Explanation:
Create 2 arrays to store frequencies and flags which indicate whether they should be changed or not.
The digit with highest frequency is possibly our target digit and we find cost of every possible target number.
To minimize the cost, change the digits which are adjacent to the target number.
*/
