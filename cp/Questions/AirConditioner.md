# Air Conditioner

Your classroom has finally installed a working air conditioner! The air conditioner has three three states : *off*, *heating* and *cooling*. 

When it's in the *off* state, the classrooms temperature remains the same. When it's *heating*, the temperature increases by 1 in one minute. Lastly, when it is *cooling*, the temperature decreases by 1 in one minute. Initially, the air conditioner is *off*.

Pant has designed an extension for the air conditioner as a project, which automatically switches between the states of the air conditioner. He is given a list of students with their arrival times (t<sub>$i$</sub>) and their desired temperature range (Lower bound - l<sub>$i$</sub> and Upper bound - h<sub>$i$</sub>) 

A student is satisfied if the temperature at their arrival time lies within their preferred range. Formally, the $i^{th}$ customer is satisfied if and only if the temperature is between l<sub>$i$</sub> and h<sub>$i$</sub>(inclusive) in the t<sub>$i$</sub>-th minute.

Given the initial temperature, and the list of students' arrival times and their preferred temperature ranges, you need to find out if it is possible to satisfy **every** incoming student to the classroom. 

## Input
The first line of input contains an integer $t$ (1 $\leq$ t $\leq$ 500). Description of the test case follows.

The first line of test case contains two integers **n** and **m** (1 $\leq$ n $\leq$ 100) ( - $10^9$ $\leq$ m $\leq$ $10^9$) where **n** is the number of students coming to the classroom and **m** is the initial temperature of the classroom. 

Next, **n** lines follow. The $i^{th}$ line contains three integers, **t<sub>$i$</sub>** , **l<sub>$i$</sub>** and **h<sub>$i$</sub>**,  where **t<sub>$i$</sub>** is the time when the $i^{th}$ student arrives at the classroom, **l<sub>$i$</sub>** is the lower bound of their temperature range, and **h<sub>$i$</sub>** is the upper bound of their preferred temperature range. 
Do note that the preferred temperature ranges are **inclusive**.
The students are given in a **non-decreasing** order of their visit time, and the initial time is **0**.

## Output
For each test case, print ``"YES"`` if it is possible to satisfy all the incoming students. Otherwise, print ```"NO"``` (Output is case insensitive)

## Test-Case
### Input
```
4
3 0
5 1 2
7 3 5
10 -1 0
2 12
5 7 10
10 16 20
3 -100
100 0 0
100 -50 50
200 100 100
1 100
99 -100 0
```
### Output   
```
YES
NO
YES
NO
```

## Explanation
In the first case, Pant's project can satisfy all the students in the following way :
- At the **0**-th minute, change the state to *heating* (temperature is 0).
- At the **2**-nd minute, change the state to *off* (the temperature is now 2)
- At the **5**-th minute, change the state to *heating* (temperature is still 2, and the first student is satisfied)
- At the **6**-th minute, change the state to *off* (the temperature is 3)
- At the **7**-th minute, change the state to *cooling* (the temperature is still 3, the second student is satisfied)
- At the **10**-th minute, the temperature will be 0 (the fourth and final student is satisfied)

In the third case, the state can be change to *heating* at **0**-th minute and can be left as it is. In this way, all the students will be satisfied. 

In the second and fourth case, it is impossible to make all the students satisfied.



