#include <stdio.h>
#include <stdlib.h>

void vulnerable_code(int n) {
    int *arr = (int *)malloc(n * sizeof(int));
    printf("\nVulnerable:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}

void mitigated_code(int n) {
    int *arr = (int *)calloc(n , sizeof(int));
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
    int n = 5;
    mitigated_code(n);
    vulnerable_code(n);
}
