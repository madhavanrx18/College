#include <stdio.h>
#include <limits.h>

void implicit_conversion() {
    double d = 123.456;
    int i = d;  
    printf("Implicit conversion: double = %f, int = %d\n", d, i);
}

void explicit_conversion() {
    double d = 123.456;
    int i = (int)d;  
    printf("Explicit conversion: double = %f, int = %d\n", d, i);
}

int main()
{
    implicit_conversion();
    explicit_conversion();
}
