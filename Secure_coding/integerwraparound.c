#include <stdio.h>
#include <limits.h>


void vulnerable_wraparound() {
    unsigned int x = UINT_MAX;
    printf("Vulnerable: x = %u\n", x);
    x += 1;
    printf("After wraparound: x = %u\n", x);
}

void mitigated_wraparound() {
    unsigned int x = UINT_MAX;
    printf("Mitigated : x = %u\n", x);
    if (x == UINT_MAX) {
        printf("Cannot increment, would cause wraparound.\n");
    } else {
        x += 1;
        printf("After increment: x = %u\n", x);
    }
}

int main() {
    vulnerable_wraparound();
    mitigated_wraparound();
}