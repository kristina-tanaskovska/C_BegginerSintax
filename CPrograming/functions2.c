/*Function with the name power oth two arguments int that computes p exponent, n number,
need to find n res p and call it into the main function*/
#include<stdio.h>
//prototype  int power(int n; int p);

int power(int n, int p){
	int power=1;
	for (int i = 0; i < p; ++i)
	{
		power*=n;
	}//endfor


	return power;
}//endpower func

int secondEx(int a, int b, int c){
	int result;
	int num1=2;
	for (int i = 0; i < a; ++i)
	{
		num1*= num1;
	}//endfor

	for (int i = 0; i < b; ++i)
	{
		num1*= num1;
	}//endfor

	for (int i = 0; i < c; ++i)
	{
		num1*= num1;
	}//endfor

	return result;
}//end func

int main(){
	int dp;
	int dn;
	int c


	printf("Enter the exponent p:\n");
	scanf("%d", &dp);
	printf("Enter the number n:\n");
	scanf("%d", &dn);
	printf("Enter the third integer\n");
	scanf("%d", &c);


	int result= power(dn,dp);
	printf("%d", result);
	

	return 0;
}//endmain

