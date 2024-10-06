#include <stdio.h>

void main() {
    char str[5] = "hello";  // Incorrect: bound specified is too small
    printf("%s\n", str);

    char strc[]="that what she said ";
    printf("%s\n",strc);
}