/*
This program test the absolute libratr
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	int dInput;
	int dResult;
	scanf("%d", &dInput);

	dResult=abs(dInput)*abs(dInput);
	printf("\n The result is %d", dResult);
	return 0;
}
