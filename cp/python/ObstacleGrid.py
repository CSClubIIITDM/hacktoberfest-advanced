def UniquePathHelper(i, j, r, c, A, paths):
    # boundary condition or constraints
    if (i == r or j == c):
        return 0
 
    if (A[i][j] == 1):
        return 0
 
    # base case
    if (i == r - 1 and j == c - 1):
        return 1
 
    if (paths[i][j] != -1):
        return paths[i][j]
 
    paths[i][j] = UniquePathHelper(
        i + 1, j, r, c, A, paths) + UniquePathHelper(i, j + 1, r, c, A, paths)
    return paths[i][j]
 
 
def uniquePathsWithObstacles(A):
 
    r, c = len(A), len(A[0])
 
    # create a 2D-matrix and initializing
    # with value 0
 
    paths = [[-1 for i in range(c)]for j in range(r)]
 
    return UniquePathHelper(0, 0, r, c, A, paths)
 
# Driver code
 
#enter rows
m = int(input())
#enter cols
n = int(input())
A = []  

#taking input matrix
for i in range(m):  
    single_row = list(map(int, input().split()))  
    A.append(single_row)  
    
print(uniquePathsWithObstacles(A))