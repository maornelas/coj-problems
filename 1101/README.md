# 1101 - Binaries Palindromes

**Description**

Given two positive integers, determine which are the integers in this range that have a palindrome binary representation. It will include ends of the interval.

**Input specification**

The input has the following format: In the first line an integer 50 <= n <= 200, indicating how many intervals will be analyzed below. Then will follow n lines, each of which contains the numbers that define the range separated by a blank space. The numbers that make up the range are in the range from 1 to 2*10^5.

**Output specification**

The output consists of n lines, each line will be the set of numbers whose binary equivalents are palindromes. The numbers in this sequence are separated by a blank space. If there is no binary palindromes in the interval, the line is changed leaving this completely blank.

**Sample input**
<br/>

6<br/>
247 333<br/>
375 609<br/>
70 154<br/>
124 301<br/>
956 961<br/>
682 769<br/>

**Sample output**
<br/>

255 257 273 297 313 325<br/>
381 387 403 427 443 455 471 495 511 513 561 585<br/>
73 85 93 99 107 119 127 129 153<br/>
127 129 153 165 189 195 219 231 255 257 273 297<br/>
<br/>

693 717 765