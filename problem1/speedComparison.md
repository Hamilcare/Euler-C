# SpeedComparison

##### Goal : Find the sum of all the multiples of 3 or 5 below 1000.

Running 10K times with limit = 1000
--------------------------------------

- Sequential :
 - real	0m6.687s
 - user	0m3.617s
 - sys	0m3.654s


- Thread :
 - real	0m10.190s
 - user	0m3.108s
 - sys	0m6.732s

Running 10K times with limit = 10 000
--

- Sequential :
 - real	0m6.820s
 - user	0m3.598s
 - sys	0m3.809s


 - Thread :
  - real	0m10.950s
  - user	0m3.284s
  - sys	0m7.256s

Running 10K times with limit = 100 000
--
- Sequential
 - real	0m6.771s
 - user	0m3.627s
 - sys	0m3.755s


- Thread :
 - real	0m11.939s
 - user	0m4.740s
 - sys	0m7.749s


Running 10K times with limit = 1 000 000
--

- Sequential :
 - real	0m7.001s
 - user	0m3.535s
 - sys	0m4.028s


- Thread :
 - real	0m29.643s
 - user	0m28.943s
 - sys	0m6.864s
