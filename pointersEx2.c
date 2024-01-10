#include<stdio.h>
void swap(int* val1, int*val2){
	int temp=*val1;
	*val1=*val2;
	*val2=temp;
}



int main(){
	int dVal1;
	int dVal2;

	scanf("%d%d", &dVal1, &dVal2);

	int *ptrVal1 = &dVal1;
	int *ptrVal2 = &dVal2;


	swap(ptrVal1,ptrVal2);
	printf("\nValue one is %d Value two is %d\n",dVal1, dVal2 );
	return 0;
}//endmain