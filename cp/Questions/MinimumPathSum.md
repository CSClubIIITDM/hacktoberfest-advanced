# Title :
  MINIMUM PATH SUM

# Description :
  Given a triangle array, return the minimum path sum from bottom to top. <br>
  For each step, you may move to an adjacent number of the row below. <br>
  More formally you may move from [i] to [i-1] i.e., upward or [i][j] to [i-1][j-1] i.e., diagonally upward (Error).
  
  ***
  (Update) <br>
  For us to move upwards we move from [i][j] to [i-1][j]. <br>
  For us to move diagnally upward we move from [i][j] to [i-1][j+1]. <br>
  ***
  
# Constraints :
  - 1 $\leq$ triangle.length $\leq$ 200 <br>
  - triangle[0].length == 1 (Error) <br> 
  
  ***
  (Update) <br>
  triangle[triangle.length - 1].length = 1 <br>
  triangle[0].length = triangle.length <br>
  ***
  
  - triangle[i].length == triangle[i + 1].length + 1 <br>
  - 104 $\leq$ triangle[i][j] $\leq$ 104

# Sample Test Case :
##  Example 1:
###  Input: 
    Triangle = [[4,1,8,3],[6,5,7],[3,4],[2]]
###  Output:
    11
###  Explanation: The triangle looks like:
  4 1 8 3 <br>
  &nbsp;6 5 7 <br>
  &nbsp;&nbsp;3 4 <br>
  &emsp;2 <br>
  The minimum path sum from top to bottom (Error) is 1 + 5 + 3 + 2 = 11 (underlined above).
  
  ***
  Update<br>
  It should be bottom to top.
  ***
  
### Submission Rules:
  - Expected Time Complexity - O(n^2)
  - n is the size of triangle array
