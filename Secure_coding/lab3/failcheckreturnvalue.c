#include <stdio.h>

int main(){
	int* ptr=(int*)malloc(sizeof(int));
	//we have to check whether the memory is allocated or not
	free(ptr);
}