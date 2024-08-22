#include<stdio.h>

int main(){
	int* ptr=(int*)malloc(sizeof(int));
	if(*ptr!=NULL){
		free(ptr);
	}
	free(ptr);//ptr is freed more than once
	
}