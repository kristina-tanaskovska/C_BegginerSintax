/*
Define a function which takes as input a pointer to a character (p1) and a pointer to an
integer (p2). If p1 is pointing to ‘s’, it squares the value p2 is pointing to, if p1 is pointing to
‘+’, it adds +1 to the value at p2, otherwise it changes the character at p1 to ‘e’.
*/

#include<stdio.h>

void dataManipulation(char* p1, int* p2){
	if(*p1 == 's'){
		*p2 == (*p2) * (*p2);
	}//endif
	else if(*p2 == '+'){
		*p2 == (*p2)+1;
	}//end elseif
	else{
		*p1='e';
	}//end else


}//end function


int main(){
	int charVar = 's';
	int intValue = 10;

	char *ptrChar = &charVar;
	int *ptrInt = &intValue;

	dataManipulation(ptrChar, ptrInt);

	printf("\n The modified caracter is %c", charVar);
	printf("\n The modified caracter is %d", intValue);

	return 0;
}//end main