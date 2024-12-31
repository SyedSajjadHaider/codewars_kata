
/*
Problem statement
https://www.codewars.com/kata/545cedaa9943f7fe7b000048/c
*/


#include <stdbool.h>
#include<ctype.h>
#include<string.h>

bool is_pangram(const char *str_in) {
  char alpha_index=0;
  for(alpha_index='a'; alpha_index<='z'; alpha_index++) {
      if ( strchr(str_in, tolower(alpha_index)) != NULL || strchr(str_in, toupper(alpha_index)) != NULL )
        continue;
      else
        return false;    
  }
  return true;
}