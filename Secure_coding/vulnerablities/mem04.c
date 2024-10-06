#include <stdio.h>
#include <stdlib.h>

void vulnerable_code(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
    }
    printf("Vulnerable:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}

void mitigated_code(int n) {
    if (n <= 0) {
        printf("Mitigated code: Skipping zero-length allocation.\n");
        exit(1);
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
    }
    printf("Mitigated:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}

int main() {
    int n = 0;
    vulnerable_code(n);
    mitigated_code(n);
}
