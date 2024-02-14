#include<stdio.h>

int main(){
	int dVar1=5;

	int dCounter=0;
	for(int i=dVar1; i>0;i--){
		for(int j=0; j<i;j++){
			printf("*");
			
		}
		
		printf("\n");
	}




	return 0;
}//endmain