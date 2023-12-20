/*  -receave 3 digit integer
	-analyze the last two digits
	Task: 	If both second and third digits are even print BAZINGA
			If only second digit is even print Kaboom
			If only third didigt is even print KABLAM
			if both second and third digits are odd, print ALAKAZAM,
	Hint: using logical operators and and or

	not specified if from left to right 
*/
#include<stdio.h>

int main(){
	//define vARIABLES
	int dnum;

	//comunicate to user
	printf("\n Enter two numbers: \n");

	//recive input
	scanf("%d", &dnum);

	//check if number is 3 digits
	if(dnum>=100 && dnum<=999){
		if((dnum%10)%2 == 0 && (dnum%100)%2 == 0){
			printf("\n BAZINGA\n ");
		}
		else if((dnum%10)%2 == 0){
			printf("\n KABOOM\n ");
		}
		else if((dnum%100)%2 == 0){
			printf("\n KABLAM \n ");
		}
		else{
			printf("\n ALKAZAM \n");
		}


	}//end check if 3 digit num
	else{
		printf("\n ERROR WRONG INPUT, enter three digit number");
	}//end else

	return 0;
}//endmain