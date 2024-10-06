#include <stdio.h>

int main()
{
    fun();
}

void fun(){
    int* ptr = malloc(sizeof(int));
    *ptr = 5;
    printf("Value assigned is %d",*ptr);
    free(ptr);
}