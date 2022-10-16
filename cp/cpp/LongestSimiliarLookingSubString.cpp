#include<bits/stdc++.h>
using namespace std;

//Function to find the length of the longest palindrome
string is_palindrome(string s){

    //Storing palindrome with longest length
    string res = "";
    //Length of the longest palindrome
    int reslen = 0;

    for(int i = 0; i < s.size(); i++){

        //Odd length Palindrome
        int l1 = i, r1 = i;
        while(l1 >=0 && r1 < s.size() && s[l1] == s[r1]){

            if((r1-l1+1) > reslen){
                reslen = r1-l1+1;
                res = s.substr(l1, reslen);
            }

            l1--;
            r1++;
        }

        //Even length Palindrome
        int l2 = i, r2 = i+1;
        while(l2 >= 0 && r2 < s.size() && s[l2] == s[r2]){

            if((r2-l2+1) > reslen){
                reslen = r2-l2+1;
                res = s.substr(l2, reslen);
            }

            l2--;
            r2++;
        }
    }

    return res;
}

int main(){

    string s;
    cin >> s;

    string res = is_palindrome(s);

    cout << res << endl;

    return 0;
}

/*
Explanation:

For each string, we start looking for palindromic string from the left.
For each index we check if elements to the left of the string and elements to the right of the 
string are same. If they are same we increase the length of the longest string.
Different checks are done to check for longest even and odd length strings.

*/
