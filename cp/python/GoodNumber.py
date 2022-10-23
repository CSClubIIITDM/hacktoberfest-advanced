# Name: Avinash R Changrani
# Roll no: CS20B1044
# Question: Good Number

n, k = [int(x) for x in input().split()]
s = input()

counter = [0]*10
result = []

# initialising the result to a large number
res = 10**9

# a counter list that keeps track of occurrence of digits between 0 and 9
for x in s:
    counter[int(x)] += 1

# choosing the target digit between 0 and 9 which will have the frequency of k
for i in range(10):
    count = counter[i]
    min = 0
    temp = list(s)
    ch = ord('0') + i
    # going from 1 to 9 offset
    for j in range(1, 10):
        if count >= k:
            break
        # if the target can be obtained by subtracting from given char, we greedily go from first to last as we're decreasing the number(lexicographically min)
        if ch + j <= ord('9'):
            for l in range(0, n):
                if ord(temp[l]) == ch + j:
                    if count == k:
                        break
                    min += j
                    temp[l] = chr(ch)
                    count += 1
        # if the target can be obtained by adding from given char, we greedily go from last to first as we're increasing the number(lexicographically min)
        if ch - j >= ord('0'):
            for l in range(n-1, -1,-1):
                if ord(temp[l]) == ch - j:
                    if count == k:
                        break
                    min += j
                    temp[l] = chr(ch)
                    count += 1
    if(count >= k):
        # if number of moves required  this iteration is less than min change res to min and store the result
        if min < res:
            res = min
            result = temp
        # if number of moves is min and we obtain a better lexicographical string, we store it in result
        if res == min and temp < result:
            result = temp

print(res)
print(''.join(result))


# Explanation
# O(100*n) Solution
# It is a brute force solution where we choose the target digit and offset and see if we can get the min lexicographical string each iteration
# We print the best after all iterations.
