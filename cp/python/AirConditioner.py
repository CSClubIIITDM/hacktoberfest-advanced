# Name: Avinash R Changrani
# Roll no: CS20B1044
# Question: Air Conditioner

import sys


def get_ints(): return map(int, sys.stdin.readline().strip().split())


def solve():
    n, m = [int(x) for x in input().split()]
    # for storing the max temperature and min temperature os that we can see if the student can have the desired range (intialised to intialised to intial temperature)
    min_t = m
    max_t = m
    # and prev for storing prev time(starting from 0 initially)
    prev = 0
    t = [0]*n
    l = [0]*n
    h = [0]*n
    for i in range(n):
        t[i], l[i], h[i] = get_ints()
    # a boolean for seeing if all students can get their desire range at the time of their arrival
    flag = True
    for i in range(n):
        # how much we can increase the max based on time difference between current and previous student
        max_t += t[i] - prev
        # how much we can decrease the min temperature based on time difference between current and previous student
        min_t -= t[i] - prev
        # if we're unable to get the desired range within our current max range, we break and print NO
        if max_t < l[i] or min_t > h[i]:
            flag = False
            break
        # contract the range to match the student's temperature range by finding the intersection
        max_t = min(h[i], max_t)
        min_t = max(l[i], min_t)
        # store the current arrival time of student in prev
        prev = t[i]
    # print yes if we can satisfy all the desired temperature ranges for all students at time of arrival
    result = "YES" if flag else "NO"
    print(result)
    return


t = int(input())
for i in range(t):
    solve()

# O(n) Solution
# By Traversing, we find range that can satisy all students, if we're unable to satisfy any student at the time of arrival. We just print NO, else YES.
# It is a greedy Solution where we to try to maximize the possible range for each student when they arrive.
