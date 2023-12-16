#include<stdio.h>

int main(){
	//initialize variables
	int dInput1, dInput2,dInput3, dInput4,dInput5;

	//give instructions

	//get values
	scanf("%d%d%d%d%d", &dInput1,&dInput2,&dInput3,&dInput4,&dInput5);

	for(int i=0; i<dInput1;i++){
		if(i%2==0){
			printf("\n");
		}
		printf("&");

	}

	printf("\n\n");

	for(int i=1; i<=dInput1;i++){
		
		printf("&");
		if(i%2==0){
			printf("\n");
		}
	}

	printf("\n %d%d%d%d%d", dInput1,dInput2,dInput3,dInput4,dInput5);
	return 0;
}//endmain