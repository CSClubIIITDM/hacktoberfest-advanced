# Title :
  OBSTACLE GRID
  
# Problem Description :
  You are given an m x n integer array grid. There is a robot initially located at the bottom-left corner (i.e.,
  grid[m-1][0]). <br> The robot tries to move to the top-right corner (i.e., grid[0][n-1]). <br> The robot can only move
  either up or right at any point in time.
  <br> An obstacle and space are marked as 1 or 0 respectively in grid. A path that the robot takes cannot include
  any square that is an obstacle. <br>
  Return the number of possible unique paths that the robot can take to reach the top-right corner.
  <br> The testcases are generated so that the answer will be less than or equal to 2*10^9.
  
# Constraints :
  - m == obstacleGrid.length
  - n == obstacleGrid[i].length
  - 1 $\leq$ m, n $\leq$ 100
  - obstacleGrid[i][j] is 0 or 1

# Sample Test Cases :
  ## Example 1:
  ### Input: 
  ```
  obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
  ```
  ### Output: 
  ```
  2
  ```
  ## Explanation: 
  There is one obstacle in the middle of the 3x3 grid above.
  There are two ways to reach the bottom-right corner:
  1. Right -> Right -> Up -> Up
  2. Up -> Up -> Right -> Right
  ## Example 2:
  ### Input: 
  ```
  obstacleGrid = [[1,0],[0,0]]
  ```
  ### Output:
  ```
  1
  ```
  ## Submission Rules:
  - Expected Time Complexity - O(m*n)
  - m == obstacleGrid.length 
  - n == obstacleGrid[i].length
  - 1 $\leq$ m, n $\leq$ 100 
  - obstacleGrid[i][j] is 0 or 1.
