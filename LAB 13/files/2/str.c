// C program to illustrate strspn() function 
#include <stdio.h> 
#include <string.h> 
  
int main () { 
   int len = strspn("geeks for geeks","eeks"); 
   printf("Length of initial segment matching : %d\n", len );     
   return(0); 
} 
