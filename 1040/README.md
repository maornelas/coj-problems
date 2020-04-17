
# 1040 - Pick up Sticks

**Description**

Pick up sticks is a fascinating game. A collection of coloured sticks are dumped in a tangled heap on the table. Players take turns trying to pick up a single stick at a time without moving any of the other sticks. It is very difficult to pick up a stick if there is another stick lying on top of it. The players therefore try to pick up the sticks in an order such that they never have to pick up a stick from underneath another stick.

**Input specification**

The input consists of several test cases. The first line of each test case contains two integers **n** and **m** each at least one and no greater than one million. The integer **n** is the number of sticks, and **m** is the number of lines that follow. The sticks are numbered from 1 to **n**. Each of the following lines contains a pair of integers **a, b**, indicating that there is **a** point where stick **a** lies on top of stick **b**. The last line of input is 0 0. These zeros are not values of **n** and **m**, and should not be processed as such.

**Output specification**

For each test case, output **n** lines of integers, listing the sticks in the order in which they could be picked up without ever picking up a stick with another stick on top of it. See the sample output for multiple such correct orders. If there is no such correct order, output a single line containing the word IMPOSSIBLE.

**Sample input**

3 3 <br/>
1 2<br/>
2 3<br/>
3 1<br/>
3 2<br/>
1 2<br/>
2 3<br/>
6 6<br/>
1 3<br/>
3 6<br/>
3 5<br/>
2 5<br/>
2 4<br/>
1 2<br/>
0 0<br/>

**Sample output**

IMPOSSIBLE<br/>
1<br/>
2<br/>
3<br/>
1<br/>
3<br/>
2<br/>
6<br/>
5<br/>
4<br/>