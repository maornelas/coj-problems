# 1017 - Three powers

**Description**

Consider the set of all non-negative integer powers of 3. S = { 1, 3, 9, 27, 81, ... } Consider the sequence of all subsets of S ordered by the value of the sum of their elements. The question is simple: find the set at the n-th position in the sequence and print it in increasing order of its elements.

**Input specification**

Each line of input (no more than 100) contains a number n, which is a positive integer with no more than 19 digits. The last line of input contains 0 and it should not be processed.

**Output specification**

For each line of input, output a single line displaying the n-th set as described above, in the format used in the sample output.

**Sample input**

1<br/>
7<br/>
14<br/>
783<br/>
1125900981634049<br/>
0<br/>

**Sample output**

{ } <br/>
{ 3, 9 }<br/>
{ 1, 9, 27 }<br/>
{ 3, 9, 27, 6561, 19683 }<br/>
{ 59049, 3486784401, 205891132094649, 717897987691852588770249 }<br/>