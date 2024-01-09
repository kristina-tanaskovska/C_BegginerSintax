/*
	This code does not work 
*/
#include<stdio.h>

int main(){
	//initilaizing val
	int dRange;
	int dSum=0;
	printf("\n Enter range of num");
	scanf("%d", &dRange);

	int array[dRange];
	printf("\n Enter your numbers");
	//entering the numbers
	for (int i = 0; i < dRange; i++)
	{
		scanf("%d", &array[i]);
		
	}//end for 


	for (int i = 1; i < dRange; ++i)
	{
		while(array[i]>i){
			if(array[i]%i== 0){
				dSum+=i;
			}
		}
		
	}//end for
	
	for (int i = 0; i < dRange; ++i)
	{
		if(dSum == array[i]){
			printf("\n %d term is PERFECT", array[i]);
		}
		else{
			printf("\n No perfecto");
		}
	}





	

	return 0;
}//end main