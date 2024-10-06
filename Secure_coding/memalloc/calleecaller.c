#include <stdio.h>

void fun(int* ptr){
    ptr = malloc(sizeof(int));
    *ptr = 5;
    printf("Value assigned is %d",*ptr);
}
int main()
{
    int* ptr;
    fun(ptr);
    free(ptr);
}

