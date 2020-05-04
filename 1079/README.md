# 1079 - Sums in a Triangle I

**Description**

Let us consider a triangle of numbers in which a number appears in the first line, two numbers appear in the second line, etc. Develop a program which will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that: On each path the next number is located on the row below, more precisely either directly below or below and one place to the right. - The number of rows is strictly positive, but less than 100 and all numbers are positive integers between 0 and 99.

**Input specification**

In the first line integer **n** - the number of test cases (equal to about 1000). Then **n** test cases follow. Each test case starts with the number of lines which is followed by their content.

**Output specification**

For each test case write the determined value in a separate line.

**Sample input**
<br/>
2<br/>
3<br/>
1<br/>
2 1<br/>
1 2 3<br/>
4<br/>
1<br/>
1 2<br/>
4 1 2<br/>
2 3 1 1<br/>

**Sample output**
<br/>
5<br/>
9<br/>