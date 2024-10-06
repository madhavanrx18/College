#include <stdio.h>

int main()
{
    int s1,s2,s3, a[5] = {10,20,30,40,50};
    s1 = sizeof(a)/sizeof(a[0]);
    s2 = arr_sizeVul(a);
    s3 = arr_size(a,s1);
    printf("Size of arr is : %d\n",s1);
    printf("Size of arr in the vulnerable function is : %d\n",s2);
    printf("Size of arr in the non vulnerable function is : %d\n",s3);
}

int arr_sizeVul(int arr[]){
    int s = sizeof(arr)/sizeof(arr[0]);
    return s;
}

int arr_size(int arr[],int size){
    int s = size;
    return s;
}