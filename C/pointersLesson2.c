//ask user for 4 inputs into array
//print out the sum of elements in the array 
//print the values of the arrray

#include<stdio.h>

int SumOfElements(int* array){
int sum=0;
for (int i = 0; i <4; ++i)
{
sum+=array[i];	
}

return sum;
}
void arrayprint(int *array){
	for (int i = 0; i < 4; ++i)
	{
		printf("%d\n",array[i]);
	}
}


int main(){

	int array[4];

	printf("\n Enter 4 inputs into the array: \n");

	for (int i = 0; i < 4; ++i)
	{
		scanf("%d",&array[i]);
	}
	arrayprint(array);
	int total=SumOfElements(array);
printf("The sum of elemnts %d\n",total);

	return 0;
}