## 1154 - System Engineer

**Descripción**

Bob is a skilled system engineer. He is always facing challenging problems, and now he must solve a new one. He has to handle a set of servers with differing capabilities available to process job requests from persistent sources - jobs that need to be processed over a long or indefinite period of time. A sequence of persistent job requests arrives revealing a subset of servers capable of servicing their request. A job is processed on a single server and a server processes only one job. Bob has to schedule the maximum number of jobs on the servers. For example, if there are 2 jobs j1, j2 and 2 servers s1, s2, job j1 requiring the server s1, and job j2 requiring also the server s1. In this case Bob can schedule only one job. Can you help him? In the general case there are n jobs numbered from 0 to n-1, n servers numbered from n to 2 *n-1, and a sequence of job requests. The problem asks to find the maximum number of jobs that can be processed.

**Especificación de entrada**

Each data set stands for a particular set of jobs. A data set starts with the number n (n <= 10^4) of jobs, followed by the list of required servers for each job, in the format: jobnumber: (nr_servers) s1 ? snr_servers

**Especificación de salida**

The program prints the maximum number of jobs that can be processed. White spaces can occur freely in the input. The input data are correct and terminate with an end of file. For each set of data the program prints the result to the standard output from the beginning of a line. An input/output sample is in the table bellow. There are two data sets. In the first case, the number of jobs n is 2, numbered 0 and 1. The sequence of requests for job 0 is: 0: (1) 2, meaning that job 0 requires 1 sever, the server numbered 2. The sequence of requests for job 1 is: 1: (1) 2, meaning that job 1 requires 1 sever, the server numbered 2. The result for the data set is the length of the maximum number of scheduled jobs, 1.

**Ejemplo de entrada**
<br/>

2<br/>
0: (1) 2<br/>
1: (1) 2<br/>
1<br/>
0: (1) 1<br/>

**Ejemplo de salida**
<br/>

1<br/>
1<br/>