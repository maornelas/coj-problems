# 1038 - Digits

**Description**

A googol written out in decimal has 101 digits. A googolplex has one plus a googol digits. That's a lot of digits! Given any number **X**0, define a sequence using the following recurrence: **Xi**+1 = the number of digits in the decimal representation of **Xi**. Your task is to determine the smallest positive i such that **Xi = Xi-1**.

**Input specification**

Input consists of several lines. Each line contains a value of **X**0. Every value of **X**0 is non-negative and has no more than one million digits. The last line of input contains the word END.

**Output specification**

For each value of X0 given in the input, output one line containing the smallest positive i such that **Xi = Xi-1**.

**Sample input**
42 <br/>
END<br/>

**Sample output**<br/>
3<br/>