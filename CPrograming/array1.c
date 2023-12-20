/*
	Enter 4 elements in an array
	Inspect the element
	If its devisible by 4 then prelace it with 99
*/

#include<stdio.h>

int main(){
	//initialize vARIABLES
	int dNum[4];

	//for loop for user input in array
	for(int i=0;i<4;i++){
		printf( "\n Enter element %d: ", i+1 );
		scanf("%d", &dNum[i]);

		//inspect each element
		if(dNum[i]%4==0){
			dNum[i] = 9;
		}//end if
	}//end for

	printf("\n");

	for(int i=0;i<4;i++){
		printf("%d | ", dNum[i] );
	}//endfor
	return 0;
}//end main