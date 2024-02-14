/*Mid2_2.c
user gives two numbers, outputs all even numbers between them then tthe prooduct

*/
#include<stdio.h>
#include<stdlib.h>

//Prototyping functions
void swap(int* ptrA, int *ptrB);
int oddSum(int lower_bound, int upper_bound);
void EvenNumPrint(int lower_bound, int upper_bound, int* ptrProduct);

int main(int argc, char* argv[]){ //getting commant line arguments to function
	//Initializing values
	int dNum_a, dNum_b;
	int dProduct=1;
	//Assigning pointers
	int* ptrA = &dNum_a;
	int* ptrB = &dNum_b;
	int* ptrProduct = &dProduct;


	//checking for right user input
	if(argc != 3){
		printf("First number: ");
		scanf("%d", &dNum_a);
		printf("Second number: ");
		scanf("%d", &dNum_b);

		swap(ptrA, ptrB);
		EvenNumPrint(dNum_a,dNum_b,ptrProduct);
		//printf("\n First: %d, Second %d ", *ptrA, *ptrB);
		

		return 0;
	}
	else{
        *ptrA = atoi(argv[1]); // Convert the first command-line argument to integer
        *ptrB = atoi(argv[2]); // Convert the second command-line argument to integer
        //printf("%d,   %d", *ptrA, *ptrB);
        printf("First number: %d \n", *ptrA);
		printf("Second number: %d \n", *ptrB);

        swap(ptrA, ptrB);
		EvenNumPrint(dNum_a,dNum_b,ptrProduct);
	}
	
	return 0;
}//end main

void swap(int* ptrA, int *ptrB){
	int temp;
	if((*ptrA) > (*ptrB)){
		temp=*ptrA;
		*ptrA=*ptrB;
		*ptrB=temp;
	}//endif
}//end of swap

void EvenNumPrint(int lower_bound, int upper_bound, int* ptrProduct){
printf("Even numbers are: ");
for(int i=lower_bound; i<= upper_bound; i++){
	if(i%2==0){
		printf("%d, ", i);
		*ptrProduct *= i;
	}//endif
}//end of for
printf("\nThe product is: %d\n", *ptrProduct );

}//End even numbers print
