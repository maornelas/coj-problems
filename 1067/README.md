# 1067 - Guessing Game

**Description**

Stan and Ollie are playing a guessing game. Stan thinks of a number between 1 and 10 and Ollie guesses what the number might be. After each guess, Stan indicates whether Ollie's guess is too high, too low, or right on. After playing several rounds, Ollie has become suspicious that Stan cheats; that is, that he changes the number between Ollie's guesses. To prepare his case against Stan, Ollie has recorded a transcript of several games. You are to determine whether or not each transcript proves that Stan is cheating.

![Image of Yaktocat](problem1067.gif)
 
**Input specification**

Standard input consists of several transcripts. Each transcript consists of a number of paired guesses and responses. A guess is a line containing single integer between 1 and 10, and a response is a line containing "too high", "too low", or "right on". Each game ends with "right on". A line containing 0 follows the last transcript.

**Output specification**

For each game, output a line "Stan is dishonest" if Stan's responses are inconsistent with the final guess and response. Otherwise, print "Stan may be honest".

**Sample input** <br/>

10<br/>
too high<br/>
3<br/>
too low<br/>
4<br/>
too high<br/>
2<br/>
right on<br/>
5<br/>
too low<br/>
7<br/>
too high<br/>
6<br/>
right on<br/>
0<br/>

**Sample output** <br/>

Stan is dishonest<br/>
Stan may be honest<br/>