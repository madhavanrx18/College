#include <stdio.h>
int main() {
    char str1[5] = {'g','a','n','e','s'}; 
    printf("String without NULL Terminator(Vulnerable): %s\n", str1);
    
    char str2[6] = {'g','a','n','e','s','\0'}; 
    printf("String with NULL Terminator(Non Vulnerable): %s\n", str2); 

}
