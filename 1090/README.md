# 1090 - Antimonotonicity

**Description**

I have a sequence Fred of length n comprised of integers between 1 and n inclusive. The elements of Fred are pairwise distinct. I want to find a subsequence Mary of Fred that is as long as possible and has the property that: **Mary[0] > Mary[1] < Mary[2] > Mary[3] < ...**

**Input specification**

The first line of input will contain a single integer T expressed in decimal with no leading zeroes. T will be at most 50. T test cases will follow. Each test case is contained on a single line. A line describing a test case is formatted as follows: **n Fred[0] Fred[1] Fred[2] ... Fred[n-1]**. where n and each element of Fred is an integer expressed in decimal with no leading zeroes. No line will have leading or trailing whitespace, and two adjacent integers on the same line will be separated by a single space. n will be at most 30000.

**Output specification**

For each test case, output a single integer followed by a newline --- the length of the longest subsequence Mary of Fred with the desired properties.

**Sample input**
<br/>

4<br/>
5 1 2 3 4 5<br/>
5 5 4 3 2 1<br/>
5 5 1 4 2 3<br/>
5 2 4 1 3 5<br/>
<br/>

**Sample output**
<br/>

1<br/>
2<br/>
5<br/>
3<br/>