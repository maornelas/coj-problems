# 1015 - A Walk Through the Forest
**Description**

Jimmy experiences a lot of stress at work these days, especially since his accident made working difficult. To relax after a hard day, he likes to walk home. To make things even nicer, his office is on one side of a forest, and his house is on the other. A nice walk through the forest, seeing the birds and chipmunks is quite enjoyable. The forest is beautiful, and Jimmy wants to take a different route everyday. He also wants to get home before dark, so he always takes a path to make progress towards his house. He considers taking a path from A to B to be progress if there exists a route from B to his home that is shorter than any possible route from A. Calculate how many different routes through the forest Jimmy might take.

**Input specification**

Input contains several test cases followed by a line containing 0. Jimmy has numbered each intersection or joining of paths starting with 1. His office is numbered 1, and his house is numbered 2. The first line of each test case gives the number of intersections N (1 < N <= 10^3), and the number of paths M. The following M lines each contain a pair of intersections a b and an integer distance d (1 <= d <= 10^6) indicating a path of length between intersection a and a different intersection b. Jimmy may walk a path any direction he chooses. There is at most one path between any pair of intersections.

**Output specification**

For each test case, output a single integer indicating the number of different routes through the forest. You may assume that this number does not exceed 2147483647.

**Sample input**

5 6 <br/>
1 3 2<br/>
1 4 2<br/>
3 4 3<br/>
1 5 12<br/>
4 2 34<br/>
5 2 24<br/>
7 8<br/>
1 3 1<br/>
1 4 1<br/>
3 7 1<br/>
7 4 1<br/>
7 5 1<br/>
6 7 1<br/>
5 2 1<br/>
6 2 1<br/>
0<br/>

**Sample output**

2<br/>
4<br/>