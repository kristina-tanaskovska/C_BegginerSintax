//World War Z
#include<stdio.h>

int main(){
	//initializing variables
	int dN;

	//giving user instructions
	printf("\n Enter an integer number thats >=3: ");
	scanf("%d", &dN);

	if(dN >= 3){
		printf("\n you did it rights");
	}
	else{
		printf("\n wrong input");
	}

	return 0;
}//end main