#include <stdio.h>
#include <limits.h>

void vulnerable_overflow() {
    int x = INT_MAX;
    printf("Vulnerable : x = %d\n", x);
    x += 1;
    printf("After overflow: x = %d\n", x);
}

void mitigated_overflow() {
    int x = INT_MAX;
    printf("Mitigated : x = %d\n", x);
    if (x == INT_MAX) {
        printf("Cannot increment, would cause overflow.\n");
    } else {
        x += 1;
        printf("After increment: x = %d\n", x);
    }
}
int main()
{
    vulnerable_overflow();
    mitigated_overflow();
}
