#include<stdio.h>
#include<math.h>

long zeros(unsigned long n) {

  int max = log(n)/log(5);
  int sum = 0;
  int k = 0;
  int count = 0;
  
  for(k=1; k<=max; k++)
  {
    count = count + n/pow(5,k);
  } 

  return count;
}