/***********
Problem statement
https://www.codewars.com/kata/5208f99aee097e6552000148/c
/**********

#include <stddef.h> // NULL

#include<stdlib.h> // Malloc

//returned buffer should be dynamically allocated and will be freed by a caller

char* solution(const char *camelCase) {

    /*Check How many bytes will be required*/
    int i = 0;
    int byte = 0;
    while( camelCase[i] != '\0' ){
        if(camelCase[i] >='A' && camelCase[i] <= 'Z'){
	    byte++;
	}
	i++;
    }
    printf("i=%d\ttotal=%d\n",i,i+byte+1);

    /* allocate required memory  */
    char *ptr = malloc(i+byte+1); // chars+space+Null
    
    int j = 0;
    i = 0;
    while( camelCase[i] != '\0' ){
        if(camelCase[i] >='A' && camelCase[i] <= 'Z'){
	    ptr[j] = ' ';
	    j++;
	}
	ptr[j] = camelCase[i];
	i++;
	j++;
    }
    ptr[j] = '\0';

return ptr;
}

int main(){

char *c = solution("sajjadHaider");
printf("zero ->%d\n",strcmp(c,"sajjad Haider"));

    c = solution("SajjadHaider");
printf("zero ->%d\n",strcmp(c,"Sajjad Haider"));

    c = solution("sajjadXYZHaider");
printf("zero ->%d\n",strcmp(c,"sajjad Haider"));






}
