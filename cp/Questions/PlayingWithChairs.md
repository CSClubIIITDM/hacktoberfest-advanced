# Title :
  PLAYING WITH CHAIRS
  
# Problem Description :
Suppose n persons are playing a game using chairs where chairs are arranged to form atleast one or multiple circles such that every person has atleast L no. of left and R no. of right chairs empty. L and R values are given for every person.You are given a task to find the minimum number of chairs required for organising the game.
  
# Constraints :
  - 1 $\leq$ n $\leq$ 100000.
  - 1 $\leq$ L,R $\leq$ 100000.
    
# Input :
  The first line contains a single integer n which represents the no. of persons.
  Then n lines represent the L and R values of the i th person
  
# Output :
  The one and only line contains the minimum number of chairs required to play the game.

# Sample Test Cases :
  ## Example 1:
  ### Input :
  ```
  3
  1 1
  1 1
  1 1
  ```
  ### Output :
  ```
  6
  ```
  ## Example 2:
  ### Input :
  ```
  4
  1 2
  2 1
  3 5
  5 3
  ```
  ### Output :
  ```
  15
  ```
  ## Example 3 :
  ### Input :
  ```
  1
  5 6
  ```
  ### Output :
  ```
  7
  ```
  ## Explanation :
  In the second sample we require two circles , the first two persons form a circle with 5  chairs and the next two
  persons form an another circle with 10 chairs.
  ## Submission Rules:
  - Expected Time Complexity - O(nlogn)
