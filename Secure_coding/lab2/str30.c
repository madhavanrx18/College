#include <stdio.h>
int main(){

    char str[] = "string literal";
    str[0] = 'S';
    printf("%s",str);
    char *str1  = "string literal";
    str[0] = 'S';
    printf("%s",str1);
}