#include <stdio.h>
#include <stdlib.h>

int main()
{
   non_vul();
   vul();
}

void vul(){
    int *ptr = malloc(sizeof(int));
    if(ptr == NULL){
        printf("MEM not allocated");
        exit(1);
    }
    *ptr = 10;
    free(ptr);
    printf("%d\n",*ptr);
}

void non_vul(){
    int *ptr = malloc(sizeof(int));
    if(ptr == NULL){
        printf("MEM not allocated");
        exit(1);
    }
    *ptr = 10;
    printf("%d\n",*ptr);
    free(ptr);
}