//Define a matrix 3x3 with elements 1-9
//Print out complete matrix.Get diagonal values
//Print out the second column.Get the max value in the matrix
#include<stdio.h>

void diaginalOfmatrix(int counter){
	int counter=0;
	
for (int i = 1; i < 4; ++i)
{
	for (int j = 1; j < 4; ++j)
	{
		counter++;
		if(i==j){
	printf(" %d ",counter);
		}
	}
  }
  printf("\n");
}



  void secondColumn(int counter){
  	int counter=0;

for (int i = 1; i < 4; ++i)
{
	for (int j = 1; j < 4; ++j)
	{
		counter++;
		if(j==2){
			printf(" %d " ,counter);
		}
	}
   }
 }



int main(){
	int counter=0;
for (int i = 1; i < 4; ++i)
{
	for (int j = 1; j < 4; ++j)
	{
		counter ++;
		printf("%d",counter);
	}
		printf("\n");
}
	
diaginalOfmatrix(counter);
secondColumn(counter);

	return 0;
}