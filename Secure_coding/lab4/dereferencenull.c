#include <stdio.h>
#include <stdlib.h>

int main()
{
   non_vul1();
   vul1();
}

void vul1(){
    int *ptr = NULL;
    printf("Vulnerable: %d",*ptr);
}

void non_vul1(){
    int *ptr = NULL;
    if(ptr == NULL){
        printf("MEM not allocated");
    }
    printf("Mitigated: %d",*ptr);
}