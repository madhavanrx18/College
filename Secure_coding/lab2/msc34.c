#include <stdio.h>

int main()
{
    char a[3];
    gets(a);
    printf("Using gets(Vulnerable) : %s\n",a);
    
    char b[3];
    fgets(b,3,stdin);
    printf("Using fgets(Mitigated) : %s\n",b);
}