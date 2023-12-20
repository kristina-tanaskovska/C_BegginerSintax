#include<stdio.h>

void printMsg(int n){
	for(int i=0; i<n; i++){
		printf("My message \n");
	}
}

void main(){
	int c;
	printf("Enter any number ");
	scanf("%d", &c);

	printMsg(c);
	return 0;
}