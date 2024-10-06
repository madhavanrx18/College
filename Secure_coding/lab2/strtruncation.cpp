#include <stdio.h>
#include <string.h>
int main() {
    char src[] = "world";
    char dest1[6];
    strncpy(dest1, src, 5); 
    printf("Without NULL terminator(Vulnerable): %s\n", dest1); 
    char dest2[6];
    strncpy(dest2, src, 5); 
    dest2[5]='\0';
    printf("With NULL terminator(Non Vulnerable): %s\n", dest2); 
}
