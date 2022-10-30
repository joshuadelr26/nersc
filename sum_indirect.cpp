#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);

   // fill in A array with values from 0 - N-1
   for (int64_t i = 0; i < N; i ++) {
      A[i] = i;
   }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);
   
   int64_t sum = 0;

   int64_t random = lrand48() % N;

   for (int64_t i = 0; i < N; i ++) {
      sum += A[random];
      int64_t random = lrand48() % N;
   }

   return sum;
}

