# Title :
  PLAYING WITH CHAIRS
  
# Problem Description :
  Suppose you are playing a game using chairs where you form a circle with a single circle or multiple circles with
  different number of chairs. <br> There are n people who play the game and each person has a goal to sit on the
  chairs in a such a way that his left side chairs and right side chairs should be empty where left(l) and right(r)
  values are given to them.<br>You are given a task to find the minimum number of chairs required to play the game.
  
# Constraints :
  - 1 $\leq$ n $\leq$ 100000.
  - 1 $\leq$ left,right $\leq$ 100000.
    
# Input :
  The first line contains a single integer n which represents the no. of persons.
  Then n lines represent the left and right values of the i th person
  
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
