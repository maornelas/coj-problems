# 1092 - Tour de France

**Description**

A racing bicycle is driven by a chain connecting two sprockets. Sprockets are grouped into two clusters: the front cluster (typically consisting of 2 or 3 sprockets) and the rear cluster (typically consisting of between 5 and 10 sprockets). At any time the chain connects one of the front sprockets to one of the rear sprockets. The drive ratio -- the ratio of the angular velocity of the pedals to that of the wheels -- is **n:m** where **n** is the number of teeth on the rear sprocket and m is the number of teeth on the front sprocket. Two drive ratios **d1 < d2** are adjacent if there is no other drive ratio **d1 < d3 < d2**. The spread between a pair of drive ratios **d1 < d2** is their quotient: **d2 / d1**. You are to compute the maximum spread between two adjacent drive ratios achieved by a particular pair of front and rear clusters.

**Input specification**

Input consists of several (at most 80) test cases, followed by a line containing 0. Each test case is specified by the following input:
<br/>

f: the number of sprockets in the front cluster.
r: the number of sprockets in the rear cluster.
f integers, each giving the number of teeth on one of the gears in the front cluster.
r integers, each giving the number of teeth on one of the gears in the rear cluster.
<br/>

You may assume that no cluster has more than 10 sprockets and that no gear has fewer than 10 or more than 100 teeth.

**Output specification**

For each test case, output the maximum spread rounded to two decimal places.

**Sample input**
<br/>

2 4<br/> 
40 50<br/>
12 14 16 19<br/>
0<br/>
<br/>

**Sample output**
<br/>

1.19<br/>