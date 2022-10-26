# n-Conditioned

You are given an array $A$ of length **N**, an integer **k** and another integer **p**. You are tasked to find the number of sub-arrays [a<sub>$i$</sub> , ....... a<sub>$i+k$</sub> ] with length exactly equal to **k+1** that satisfies the following condition :
- If you multiply the first element of the sub-array by $p^0$, the second element by $p^1$ and so on, until the $(k+1)$-th element is multiplied by $p^k$, then the sub-array should be sorted in **strictly increasing** order. 

More formally, you need to count the number of $k+1-length$ sub-arrays which satisfy the following condition:

$p^0$ x a<sub>$i$</sub> $\leq$ $p^1$ x a<sub>$i+1$</sub> $\leq$ $p^2$ x a<sub>$i+2$</sub> ........... $\leq$ $p^k$ x a<sub>$i+k$</sub> 
(Note that there are $k$ conditions to be satisfied)

## Input 
The first line contains an integer **T** (1 $\leq$ T $\leq$ 100) denoting the number of test cases. 
This is followed three integers - **N** (1 $\leq$ N $\leq$ $10^5$), **k**(1 $\leq$ k $\leq$ **N**) and **p** (1 $\leq$ p $\leq$ 20) which denote the size of the array, the number of comparisons done in each sub-array and an arbitrary integer respectively.  
The final line of input contains **N** arbitrary integers which denote the elements of the array. (Each array element, say $A$<sub>$i$</sub> is bound to the following constraint : 1 $\leq$ $A$<sub>$i$</sub> $\leq$ $10^9$

## Output 
For each test case, output a single integer - the number of sub-arrays of the specified size satisfying the condition mentioned in the problem statement. 

## Test Cases
### Input 
```
6

4 2 3

20 22 19 84

5 1 2

9 5 3 2 1

```
### Output 
```
2
3
```

## Explanation
For the first test case, all of the possible sub-arrays (which is two) satisfy the condition : 
- [a<sub>$1$</sub>, a<sub>$2$</sub>, a<sub>$3$</sub>] = [20, 22, 19] as 1 x 20 $\leq$ 3 x 22 $\leq$ 9 x 19
- [a<sub>$2$</sub>, a<sub>$3$</sub>, a<sub>$4$</sub>] = [22, 19, 84] as 1 x 22 $\leq$ 3 x 19 $\leq$ 9 x 84

Note that for each sub-array, we are doing $k$ comparisons, thus we take our sub-arrays to be of size $(k+1)$

For the second test case, the following three sub-arrays satisfy the condition:
- [a<sub>$1$</sub>, a<sub>$2$</sub>] = [9, 5] as 1 x 9 $\leq$ 2 x 5
- [a<sub>$2$</sub>, a<sub>$3$</sub>] = [5, 3] as 1 x 5 $\leq$ 2 x 3
- [a<sub>$3$</sub>, a<sub>$4$</sub>] = [3, 2] as 1 x 3 $\leq$ 2 x 2




