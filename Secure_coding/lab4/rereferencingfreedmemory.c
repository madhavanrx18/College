#include <stdio.h>

int main(){
	int* ptr=(int*)malloc(sizeof(int));
	//do any opp with the ptr
	if(*ptr!=NULL){
		free(ptr);
	}
	*ptr=(int*)relloc(4*sizeof(int));
	//using a freed pointer is wrong
}