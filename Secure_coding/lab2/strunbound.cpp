#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Vanakkam da mapla";
    //Buffer overflow , use strncpy
    char dest2[6];  
    strncpy(dest2, src,sizeof(dest2)-1);
    dest2[sizeof(dest2)-1] = '\0';
    printf("Mitigated: %s\n", dest2);
    
    char dest1[5];  
    strcpy(dest1, src);  
    printf("Vulnerable: %s\n", dest1);
}
