/* This program is called scan.c
The program will ask the user for two integer 
inputs and print the product of these two inputs
*/
#include <stdio.h>

int main(){
	//declare variables first
	int input1, input2, product;

	//hungarian notation
	int dInput1, dInput2;

	//ask the user
	printf("\n Enter first number: ");

	//get the input
	scanf("%d", &input1);

	//the same for the secobnd number
	printf("\n Enter second number: ");
	scanf("%d", &input2);

	//compute for the product of two inputs
	product = input1 * input2;

	//print the product and the two inputs
	printf("\n The product of %d and %d is %d. \n", input1, input2, product);

	return 0;
}//end main