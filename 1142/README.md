# 1142 - Exponentiation

**Description**

Problems involving the computation of exact values of very large magnitude and precision are common. For example, the computation of the national debt is a taxing experience for many computer systems. This problem requires that you write a program to compute the exact value of R^N where R is a real number ( 0.0 <= R <= 99.999 ) and N is an integer such that 0 <= N <= 25.

**Input specification**

The input will consist of a set of pairs of values for R and N. The R value will occupy columns 1 through 6, and the N value will be in columns 8 and 9.

**Output specification**

The output will consist of one line for each line of input giving the exact value of R^N. Leading zeros should be suppressed in the output. Insignificant trailing zeros must not be printed. Don't print the decimal point if the result is an integer.

**Sample input**
<br/>

95.123 12<br/>
0.4321 20<br/>
5.1234 15<br/>
6.7592 9<br/>
98.999 10<br/>
1.0100 12<br/>

**Sample output**
<br/>

548815620517731830194541.899025343415715973535967221869852721<br/>
.00000005148554641076956121994511276767154838481760200726351203835429763013462401<br/>
43992025569.928573701266488041146654993318703707511666295476720493953024<br/>
29448126.764121021618164430206909037173276672<br/>
90429072743629540498.107596019456651774561044010001<br/>
1.126825030131969720661201<br/>