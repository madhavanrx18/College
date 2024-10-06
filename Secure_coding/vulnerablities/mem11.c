#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t s = 1024*1024*1024*10;
    non_vul(s);    
    vul(s); 
}

void vul(size_t s){
    int *ptr = malloc(s);
    printf("%ld",s);
    *ptr = 10;
    printf("\n%d",*ptr);
    free(ptr);
}

void non_vul(size_t s){
    int *ptr = malloc(s);
    if(ptr == NULL){
        printf("MeM not allocated");
        exit(1);
    }
    printf("%ld",s);
    *ptr = 10;
    printf("\n%d",*ptr);
    free(ptr);
}