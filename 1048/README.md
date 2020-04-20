# 1048 - Visible Lattice Points II


**Description**

Consider a **N*N*N** lattice. One corner is at **(0,0,0)** and the opposite one is at **(N,N,N)**. How many lattice points are visible from corner at **(0,0,0)**? A point **X** is visible from point **Y** iff no other lattice point lies on the segment joining **X** and **Y**. Write a program which, given a value for the size **(N)**, computes the number of visible points **(x,y,z)** with **0 <= x,y,z <= N** from corner at **(0,0,0)**.

**Input specification**

The first line contains the number of test cases **(1 <= T <= 200)**. Each dataset consists of a single line of input containing a single integer **N(1 <= N <= 100)**, which is the size of the lattice.

**Output specification**

Output **T** lines, one corresponding to each test case.

**Sample input**

3 <br/>
1<br/>
2<br/>
5<br/>

**Sample output**

7<br/>
19<br/>
175<br/>