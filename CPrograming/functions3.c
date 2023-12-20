/*provide two numbers and a sign
functions with provided arguments and then use switch case*/
#include<stdio.h>

int Calculator(int num1, int num2, char operator){
	int result;
	switch(operator) {

   case '+'  :
      result=num1+num2;
      break; 
	
   case '-' :
      result=num1-num2;
      break; 
   case '*'  :
      result=num1*num2;
      break; 
	
   case '/' :
      result=num1/num2;
      break; 
  
  

   default : 
   		printf("The calculation cannot be done \n");
 
	}//end switch statement

 return result;
}//end calculator function

int main(){
		int dNum1, dNum2;
		char cOperator;

		printf("Enter two numbers\n");
		scanf("%d%d", &dNum1, &dNum2);
		printf("\n Enter an operator\n");
		scanf(" %c", &cOperator);

		int result= Calculator(dNum1,dNum2,operator);
		printf("\n The calculatins is %d", result);

	return 0;
}//end main



