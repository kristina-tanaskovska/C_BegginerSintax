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