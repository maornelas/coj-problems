# 1076 - Biased Standings

**Description**

Usually, results of competitions are based on the scores of participants. However, we are planning a change for the next year of IPSC. During the registration each team will be able to enter a single positive integer: their preferred place in the ranklist. We would take all these preferences into account, and at the end of the competition we will simply announce a ranklist that would please all of you. But wait... How would that ranklist look like if it won't be possible to satisfy all the requests? Suppose that we already have a ranklist. For each team, compute the distance between their preferred place and their place in the ranklist. The sum of these distances will be called the badness of this ranklist. Given team names and their preferred placements find one ranklist with the minimal possible badness.

**Input specification**

The first line of the input file contains an integer T (no more than 20) specifying the number of test cases. Each test case is preceded by a blank line. Each test case looks as follows: The first line contains N: the number of teams participating in the competition ( 1<=N <= 10^4). Each of the next N lines contains a team name (a string of letters and numbers. The number of characters will not exceed 20) and its preferred place (an integer between 1 and N, inclusive). No two team names will be equal.

**Output specification**

For each of the test cases output a single line with a single integer: the badness of the best ranklist for the given teams.

**Sample input**

2<br/>
<br/>
7<br/>
noobz 1<br/>
llamas 2<br/>
Winn3rz 2<br/>
5thwheel 1<br/>
NotoricCoders 5<br/>
StrangeCase 7<br/>
WhoKnows 7<br/>
<br/>
3<br/>
ThreeHeadedMonkey 1<br/>
MoscowSUx13 1<br/>
NeedForSuccess 1<br/>

**Sample output**<br/>

5<br/>
3<br/>