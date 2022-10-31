#Name: jashwanth peddisetty
#Roll: CS20B1007
#Question: Minumum Path Sum

def helper(A, i, j):
    # Base Case
   if(i == len(A)):
      return 0
 
    # Add current to the minimum of the next paths (adding minimum of  diagnally or down)
   minimum = A[i][j] + min(helper(A, i + 1, j), helper(A, i + 1, j + 1))
   
    # return minimum
   return minimum
 
def minSumPath(A):
    return helper(A, 0, 0)
    
triangle=eval(input())
#reversing the list to turn it into desired format
triangle.reverse()
print(minSumPath(triangle))
'''
Explanation:

we take list of lists as an input and find the 
Minimum path is found using dynamic programming
we have two ways of movement 
1. downwards
2.diagnally
using tabulation method we find the minimum path 
'''
