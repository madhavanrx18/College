#include <stdio.h>
#include <stdlib.h>

void vul(){
    int *ptr = (int *)malloc(sizeof(int));
        if(ptr == NULL){
            printf("Mem not allocated");
        }
    *ptr = 5;
    printf("Vulnerable: %d",*ptr); 
}

void non_vul(){
    int *ptr = (int *)malloc(sizeof(int));
        if(ptr == NULL){
            printf("Mem not allocated");
        }
    *ptr = 5;
    printf("\nNon Vulnerable: %d",*ptr); 
    free(ptr);
}

int main()
{
    vul();
    non_vul();
}