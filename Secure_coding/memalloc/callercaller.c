#include <stdio.h>

void fun(int* ptr){
    *ptr = 5;
    printf("The value assigned is %d",*ptr);
}

int main()
{
    int* ptr = malloc(sizeof(int));
    fun(ptr);
    free(ptr);
}

