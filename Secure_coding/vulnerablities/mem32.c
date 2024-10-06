#include <stdio.h>
#include <stdlib.h>
int main()
{
    vul();
    non_vul();
}

void vul(){
    int *ptr = malloc(sizeof(int));
    *ptr = 2;
    if(ptr == NULL){
        printf("MEM not allocated");
        exit(1);
    }
    printf("Vulnerable: %d",*ptr);
    free(ptr);
}

void non_vul(){
    int *ptr = malloc(sizeof(int));
    *ptr = 2;
    printf("\nMitigated: %d",*ptr);
    free(ptr);
}