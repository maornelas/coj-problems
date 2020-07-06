# 1116 - Cantoring Along

**Description**

The Cantor set was discovered by Georg Cantor. It is one of the simpler fractals. It is the result of an infinite process, so for this program, printing an approximation of the whole set is enough. The following steps describe one way of obtaining the desired output for a given order Cantor set: Start with a string of dashes, with length 3order Replace the middle third of the line of dashes with spaces. You are left with two lines of dashes at each end of the original string. Replace the middle third of each line of dashes with spaces. Repeat until the lines consist of a single dash. For example, if the order of approximation is 3, start with a string of 27 dashes: --------------------------- Remove the middle third of the string: ---------?????????--------- and remove the middle third of each piece: ---???---?????????---???--- and again: -?-???-?-?????????-?-???-?- Note: The symbols '?' are only for identation, you must print one whitespace instead of each of them. The process stops here, when the groups of dashes are all of length 1. You should not print the intermediate steps in your program. Only the final result, given by the last line above, should be displayed.

**Input specification**

Each line of input will be a single number between 0 and 12, inclusive, indicating the order of the approximation. The input stops when end-of-file is reached.

**Output specification**

You must output the approximation of the Cantor set, followed by a newline (see the sample output). There is no whitespace before or after your Cantor set approximation. The only characters that should appear on your line are '-' and ' '. Each set is followed by a newline, but there should be no extra newlines in your output. Symbols '?' are only for identation, you must print ' ' instead of each of them.

**Sample input**
<br/>

0<br/>
1<br/>
3<br/>
2<br/>

**Sample output**
<br/>

-<br/>
-?-<br/>
-?-???-?-?????????-?-???-?-<br/>
-?-???-?-<br/>