//Definr vectors a{1,2,3,4,5,} and b{1,1,1,1,1}. 
//Calculate and print out the sum of vectors a and b.
#include<stdio.h>
void SumOfvectors(int *A, int *B){
	int sum[5];
	for (int i = 0; i < 5; ++i)
	{
		sum[i]=A[i]+B[i];
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("The sum: %d\n ",sum[i] );
	}
	
}
int main(){
	int A[5]={1,2,3,4,5};
	int B[5]={1,1,1,1,1};
	SumOfvectors(A, B);


	return 0;
}