# Title:
  Good Number
# Problem Description:
  Vinod has a bike and the number plate has n digits and he wants a very fancy number for his bike such that everyone likes it. A number is called good number if it has at least k equal digits. Vinod wants to change the digits in his bike’s number so that the number becomes nice. To replace one of n digits Vinod has to pay the sum of money, equal to the absolute diff erence between the previous digit and the new one.<br> Help Vinod to find the minimum sum of money he should pay to make the number of his bike good. You should also find the resulting fancy number. If there are several such numbers, then print the lexicographically minimum one.
  
# Input:
  The first line contains two space-separated integers n and k which represent how many digits the number has and how many equal digits a fancy number should have. The second line consists of n digits. It describes the previous number of Vinod’s bike. It is guaranteed that the number contains no spaces and only contains digits
  
# Constraints:
  - 2 ≤ n ≤ 10^4<br>
  - 2 ≤ k ≤ n
  
# Output:
  On the first line print the minimum sum of money Vinod needs to change the number. On the second line print the bike's new number. If there are several solutions, print the lexicographically minimum one
  
# Sample Test Cases:
###  Test Case -1:<br>
  Input:
  ```
  6 5 
  898196
  ```
  Output:
  ```
  4
  888188
  ```
  
###  Test Case-2:<br>
  Input:
  ```
  3 2
  533
  ```
  Output:
  ```
  0
  533
  ```
  
###  Test Case-3:<br>
  Input:
  ```
  10 6
  0001112223
  ```
  Output:
  ```
  3
  0000002223
  ```
  
# Submission Rules:
  - Expected Time Complexity - O(n^2)
  
  
  
         

