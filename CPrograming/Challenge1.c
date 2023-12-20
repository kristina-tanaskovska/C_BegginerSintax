//this program checks if a num is odd or even without modulus operator
#include <stdio.h>

int main(){
	//declare variables first
	int dNum;

	//ask the user
	printf("\n Enter number: \n");

	//get the input
	scanf("%d", &dNum);

	if(dNum/2 == (dNum/2)*2){
		printf("\n The number %d is an even number. \n",dNum);
	}
	else{
		printf("\n The number %d is an odd number. \n",dNum);
	}

	return 0;
}//end main