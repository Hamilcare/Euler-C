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


- ThreadV2
 - real	0m9.086s
 - user	0m3.701s
 - sys	0m5.691s


 - Fork :
  - real	0m8.724s
  - user	0m3.386s
  - sys	0m5.527s


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


- ThreadV2
 - real	0m9.704s
 - user	0m3.697s
 - sys	0m5.847s


 - Fork :
  - real	0m9.518s
  - user	0m3.393s
  - sys	0m5.829s


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


- ThreadV2 :
 - real	0m15.598s
 - user	0m9.651s
 - sys	0m4.778s


 - Fork :
  - real	0m10.994s
  - user	0m3.378s
  - sys	0m5.894s


Running 10K times with limit = 200 000
--
- Sequential :
 - real	0m6.781s
 - user	0m3.654s
 - sys	0m3.675s


- Thread :
 - real	0m14.005s
 - user	0m6.986s
 - sys	0m6.540s


- Fork :
 - real	0m13.076s
 - user	0m3.862s
 - sys	0m5.600s


Running 10K times with limit = 400 000
--
- Sequential :
 - real	0m6.914s
 - user	0m3.593s
 - sys	0m3.869s


- Thread :
 - real	0m17.586s
 - user	0m11.498s
 - sys	0m5.915s


- Fork :
 - real	0m15.751s
 - user	0m3.900s
 - sys	0m5.231s


Running 10K times with limit = 600 000
--
- Sequential :
 - real	0m6.673s
 - user	0m3.581s
 - sys	0m3.632s


- Thread :
 - real	0m21.985s
 - user	0m16.772s
 - sys	0m6.422s


- Fork :
 - real	0m15.751s
 - user	0m3.900s
 - sys	0m5.231s


Running 10K times with limit = 800 000
--

- Sequential :
 - real	0m6.670s
 - user	0m3.629s
 - sys	0m3.618s


- Thread :
 - real	0m26.536s
 - user	0m23.472s
 - sys	0m6.941s


- Fork :
 - real	0m23.337s
 - user	0m3.850s
 - sys	0m5.751s


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


- ThreadV2 :
 - real	1m11.081s
 - user	1m55.940s
 - sys	0m7.095s


 - Fork:
  - real	0m26.783s
  - user	0m3.883s
  - sys	  0m5.800s
