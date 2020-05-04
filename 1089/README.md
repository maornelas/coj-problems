# 1089 - Open Source

**Description**

At an open-source fair held at a major university, leaders of open-source projects put sign-up sheets on the wall, with the project name at the top in capital letters for identification. Students then signed up for projects using their userids. A userid is a string of lower-case letters and numbers starting with a letter. The organizer then took all the sheets off the wall and typed in the information. Your job is to summarize the number of students who have signed up for each project. Some students were overly enthusiastic and put their name down several times for the same project. That's okay, but they should only count once. Students were asked to commit to a single project, so any student who has signed up for more than one project should not count for any project. There are at most 10000 students at the university, and at most 100 projects were advertised.

**Input specification**

The input contains several test cases, each one ending with a line that starts with the digit 1. The last test case is followed by a line starting with the digit 0. Each test case consists of one or more project sheets. A project sheet consists of a line containing the project name in capital letters, followed by the userids of students, one per line.

**Output specification**

For each test case, output a summary of each project sheet. The summary is one line with the name of the project followed by the number of students who signed up. These lines should be printed in decreasing order of number of signups. If two or more projects have the same number of signups, they should be listed in alphabetical order.

**Sample input**
<br/>
<br/>

UBQTS TXT<br/>
tthumb<br/>
LIVESPACE BLOGJAM<br/>
philton<br/>
aeinstein<br/>
YOUBOOK<br/>
j97lee<br/>
sswxyzy<br/>
j97lee<br/>
aeinstein<br/>
SKINUX<br/>
1<br/>
0<br/>
<br/>
<br/>

**Sample output**
<br/>
<br/>
YOUBOOK 2<br/>
LIVESPACE BLOGJAM 1<br/>
UBQTS TXT 1<br/>
SKINUX 0<br/>