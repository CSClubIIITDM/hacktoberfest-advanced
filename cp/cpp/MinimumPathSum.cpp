//Name: Yash Agrawal
//Roll: EC20B1059
//Question: Minimum Path Sum

#include <bits/stdc++.h>
using namespace std;

//Function to find the sum of the minimum path in a triangular array
int min_path_sum(vector<vector<int>>& triangle){

    int n = triangle.size();
    //Converting the array into desirable format
    reverse(triangle.begin(), triangle.end());
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for(int i = 0; i < n; i++){

        for(int j = 0; j < i+1; j++){

            if(i == 0 && j == 0){
                dp[i][j] = triangle[0][0];
            }

            else{
                //Max value possible according to constraints
                int down = 2000000;
                int right = 2000000;

                if(i != j){
                    down = triangle[i][j] + dp[i-1][j];
                }

                if(j > 0){
                    right = triangle[i][j] + dp[i-1][j-1];
                }

                dp[i][j] = min(down, right);
            }
        }
    }

    //Finding the minimum value possible
    int min_num = dp[n-1][0];
    for(int i = 0; i < n; i++){
        min_num = min(min_num, dp[n-1][i]);
    }

    return min_num;
}


int main(){

    //Taking 2D vector of unknown size as input
    string s;
    cin >> s;

    vector<vector<int>> vec;
    vector<int> data;
    
    for(int i = 0; i < s.size(); i++){

        if(s[i] == ']' && !data.empty()){

            vec.push_back(data);
            data.clear();
        }

        else if(s[i] == '[' || s[i] == ',') continue;

        else{
            //Converting character to integer
            int x = s[i] - '0';
            data.push_back(x);
        }
    }

    cout << min_path_sum(vec) << endl;

    return 0;
}

/*
Explanation:

Take a vector of unkown size as input as string.
Minimum path is found using dynamic programming

We have two options to move from point, directly downwards or diagnally.
We find the solution by finding the minimum paths among several routes and 
using tabulation method we find the correct result
*/
