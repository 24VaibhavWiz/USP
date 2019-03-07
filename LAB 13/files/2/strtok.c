
#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str[] = "More People have died because of religious conflict than any other reason?"; 
  
    // Returns first token 
    char* token = strtok(str, " "); 
  
    // Keep printing tokens while one of the 
    // delimiters present in str[]. 
    while (token != NULL) { 
        printf("%s\n", token); 
        token = strtok(NULL, " "); 
    } 
  
    return 0; 
} 
