# 1126 - The Circumference of the Circle

**Description**

To calculate the circumference of a circle seems to be an easy task - provided you know its diameter. But what if you don't? You are given the cartesian coordinates of three non-collinear points in the plane. Your job is to calculate the circumference of the unique circle that intersects all three points. The value used on this problem of the constant **PI** was **3.141592653589793**.

**Input specification**

The input file will contain one or more test cases. Each test case consists of one line containing six real numbers **x1, y1, x2, y2, x3, y3,** representing the coordinates of the three points. The diameter of the circle determined by the three points will never exceed a million. Input is terminated by end of file.

**Output specification**

For each test case, print one line containing one real number telling the circumference of the circle determined by the three points. The circumference is to be printed accurately rounded to two decimals.

**Sample input**
<br/>

0.0 -0.5 0.5 0.0 0.0 0.5<br/>
0.0 0.0 0.0 1.0 1.0 1.0<br/>
5.0 5.0 5.0 7.0 4.0 6.0<br/>
0.0 0.0 -1.0 7.0 7.0 7.0<br/>
50.0 50.0 50.0 70.0 40.0 60.0<br/>
0.0 0.0 10.0 0.0 20.0 1.0<br/>
0.0 -500000.0 500000.0 0.0 0.0 500000.0<br/>

**Sample output**
<br/>

3.14<br/>
4.44<br/>
6.28<br/>
31.42<br/>
62.83<br/>
632.24<br/>
3141592.65<br/>