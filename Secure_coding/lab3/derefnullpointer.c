#include <stdio.h>

int main(){
	int* ptr=NULL;
	ptr=(int*)malloc(sizeof(int));
	free(ptr);
}