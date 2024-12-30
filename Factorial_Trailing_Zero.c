/*
Problem statement
https://www.codewars.com/kata/52f787eb172a8b4ae1000a34/c
*/

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