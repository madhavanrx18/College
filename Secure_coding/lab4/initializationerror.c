#include <stdio.h>

int main(){
	char str[20]; //there is a error that the string is not inilized
	strcat(str, "hello world");
	printf("%s", str);
}