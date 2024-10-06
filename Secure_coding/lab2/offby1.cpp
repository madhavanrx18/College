#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i <= 5; i++){  
        sum += array[i]; 
    }
    printf("Sum in off-by-one error(Vulnerable): %d\n", sum);
    sum = 0;
    for (int i = 0; i < 5; i++){  
        sum += array[i]; 
    }
    printf("Sum(Non Vulnerable): %d\n", sum);

}
