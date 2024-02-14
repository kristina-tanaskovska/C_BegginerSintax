/*
	This program Tells you which month has how many days,
	it uses switch
*/

#include<stdio.h>

int main(){

	char cMonths;
	//char months[] ={'J' , 'F', 'M', 'A'};
	scanf(" %c", &cMonths);


	switch(cMonths){

	case 'J':
		printf("\n 31");
		break;
	case 'F':
		printf("\n 29");
		break;
	case 'M':
		printf("\n 31");
		break;
	case 'A':
		printf("\n 30");
		break;

	
	default:
		printf("\n Wrong MONTH");
	}

	return 0;
}//end main