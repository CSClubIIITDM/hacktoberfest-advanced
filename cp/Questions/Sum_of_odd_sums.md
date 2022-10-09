# Title: Sum of Sums which are odd

# Problem Statement:
  You are given an array of n integers a<sub>$1$</sub> ,a<sub>$2$</sub> ,a<sub>$3$</sub> ,a<sub>$4$</sub> ,...a<sub>$n$</sub>.Try to output sum of all possible odd sums that can be made using numbers of array.<br>
  Note: each element of array can be used at max once for making one odd sum.
# Input:
  The first input line contains array length.
  The next line has n integers a<sub>$1$</sub> ,a<sub>$2$</sub> ,a<sub>$3$</sub> ,a<sub>$4$</sub> ,...a<sub>$n$</sub>.

# Output:
  print the sum of all odd sums which can be made using elements of array.<br>
 
# Constraints:
  - 1 $\leq$ n $\le$ 100
  - 1 $\le$ a<sub>$i$</sub> $\le$ 1000
# Sample Test Case-1:
- Input:<br>
  ```
  3 
  2 4 5
  ```
- Output:<br>
  ```
  32 
  ```
- Explaination:<br>
  possible odd sums are:<br>
  5 can be made by 5 (just selecting 5)<br>
  7 can be made by 5+2<br>
  9 can be made by 5+4<br>
  11 can be made by 5+4+2<br>
  So 5+7+9+11 will give 32
  
 # Submission Rules:
 - Expected Time Complexity: O(n.X)
 - where X = a1+a2+a3..+an
 - Auxliary Space: O(x)
   
