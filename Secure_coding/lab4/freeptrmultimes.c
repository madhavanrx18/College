#include<stdio.h>

int main(){
	int* ptr=(int*)malloc(sizeof(int));
	//do any opp with ptr
	if(*ptr!=NULL){
		free(ptr);
	}
	free(ptr);
	//trying to free ptr again will cause a error
}