#include <sys/time.h>
#include <cstdio>
#include <iostream>


/* This simple program written by Dr. Plank takes a number n on standard input.  
   It then executes a for loop that iterates n times, counting the iterations.  
   It prints the number of iterations and a timing that uses the system call gettimeofday().  
   That's why you need to include . */

using namespace std;

int main()
{
  long long n, count, i;
  double start_time, end_time;
  struct timeval tv;

  if (!(cin >> n)) return 1;

  /* Get the starting time. */

  gettimeofday(&tv, NULL);
  start_time = tv.tv_usec;
  start_time /= 1000000.0;
  start_time += tv.tv_sec;

  /* Here's the loop, that executes n times. */

  count = 0;
  for (i = 0; i < n; i++) count++;

  /* Get the ending time. */

  gettimeofday(&tv, NULL);
  end_time = tv.tv_usec;
  end_time /= 1000000.0;
  end_time += tv.tv_sec;

  /* Print N, the iterations, and the time. */

  printf("N: %lld     Count: %lld    Time: %.3lf\n", n, count, end_time - start_time);
  return 0;

}
