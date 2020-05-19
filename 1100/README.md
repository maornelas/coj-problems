# 1100 - Transform the Expression

**Description**

Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Note that the resulting expression must be evaluated from right to left, that is, a+b+c must be evaluated as c+b+a, but respecting the priorities of operators.

**Input specification**

**t** [the number of expressions <= 100]
**t expressions** one per line [length <= 400]
Text grouped in [ ] does not appear in the input file.

**Output specification**

The expressions in RPN form, one per line, ready to be evaluated from right to left.

**Sample input**
<br/>

3<br/>
(a+b*c)<br/>
((a+b)*(z+x))<br/>
((a+t)*((b+a+c)^(c+d)))<br/>

**Sample output**
<br/>

abc*+<br/>
ab+zx+*<br/>
at+bac++cd+^*<br/>