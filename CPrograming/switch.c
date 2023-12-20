/*
	 This program accepts a character input from the user.
	 the program uses swith to check the character input.
	it the character is eather K G L M then print Kablam
   	it the character is eather AZNG then print Bazinga
 */

#include <stdio.h>

int main(){
	//declare variable
	char cInput; //we use %c

	printf("\n Please enter a large character: ");
	scanf(" %c", &cInput); // dont forget the extra space

	//do switch
	switch(cInput){
	case 'K': 
	case 'B':
	case 'L':
	case 'M':
		printf("\n KABLAM "); 
		break;
	case'A':
	case'Z':
	case'G':
	case'N':
		printf("\n BAZINGAA ");
		break;
	default: //must have
		printf("\n I do not recognize this character ");
	//colon diff then semicolon
	}//end switch
	
	return 0;
}//end main