//if exercise where i test out and and or statements

#include<stdio.h>

int main(){
	int dYear;

	scanf("%d", &dYear);
	if(dYear%6 ==0 || dYear%5==0){
		printf("\n IT WORKS");
	}//end if
	else{
		printf("\n um no it doesnt work");
	}//end else

	return 0;
}//endmain