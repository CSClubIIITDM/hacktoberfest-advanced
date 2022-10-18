//Name: Khalid Mohammad
//Roll: EC20B1101
//Question: Obstacle Grid

#include <bits/stdc++.h>
using namespace std;


int solve(vector<vector<int>> &v, int i, int j) {
    if(i<0 or j>v[0].size())    return 0;
    if(v[i][j] == 1)    return 0;
    if(i==0 and j==v[0].size()-1)    return 1;
    return solve(v, i-1, j) + solve(v, i, j+1);
}

int main() {
    
    int m, n;
    cin>>m>>n;
    vector<vector<int>> v; 
    for(int i=0; i<m; i++) {
        vector<int> row;
        for(int j=0; j<n; j++) {
            int temp;
            cin>>temp;
            row.push_back(temp);
        }
        v.push_back(row);
    }
    
    cout << solve(v, m-1, 0);
    return 0;
}

/*
Explanation:
Robot can go up or to right, so we add all possible paths by using recursion
with neccesary constraints like, it can not pass through if the block is '1'
*/
