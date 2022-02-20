#include <stdio.h>

int main(){
	char name [20];
	char command [100];
	printf("Enter your name : ");
	gets((char*)&name);
	sprintf(command,"echo hello %s; echo welcome",name);
	system(command);
}
