#include <stdio.h>

int main(){
	int* ptr=(int*)malloc(sizeof(int));

	if(*ptr!=NULL){
		free(ptr);
	}
	*ptr=(int*)relloc(4*sizeof(int));//we are reusing deallocated memory
	
}