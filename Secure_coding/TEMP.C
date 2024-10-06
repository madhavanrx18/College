#include <stdio.h>

int main(){

char a[] = "SECURE CODING";
printf("Bound of arr : %d\n",5);
printf("Hi of arr : %d\n",&a[4]);
printf("Lo of arr : %d\n",&a[0]);
printf("TargetSize of arr : %ld\n",sizeof(a));
printf("TooFar of arr : %d\n",&a[5]);

}