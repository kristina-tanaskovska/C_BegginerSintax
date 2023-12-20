/*This program recives a character input from the user and check if its a vowel or not
a e i o u
*/
#include<stdio.h>

int main(){
	//declare character variables
	char cLetter;

	//Tell the user about expected input
	printf("\n Please enter one character: ");

	//Recive input
	scanf(" %c", &cLetter);//has to have space " %c" and " %s" for strings


	//print the character input
	printf("\n You have inputed %c. \n", cLetter);

	//Check if the character is a e i o u
	//Assume everything is lowercase
	if(cLetter == 'a' || cLetter == 'e' || cLetter == 'i' || cLetter == 'o' || cLetter == 'u'){
		//do command if its true
		printf("\n %c is a vowl. \n ", cLetter);
	}//end check if vowl
	else{
		//assume they are not vowels
		printf("\n %c is a consonant. \n", cLetter);
	}


	return 0;
}//end main