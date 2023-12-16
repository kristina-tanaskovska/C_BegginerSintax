#include<stdio.h>

int main(){
	//int var
	int dVar1;
	scanf("%d", &dVar1);

	for(int i=0; i<dVar1;i++){
		for(int j=0; j<i;j++){
			printf("*");
		}
		printf("\n");
	}


	for(int i=dVar1; i>0;i--){
		for(int j=0; j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}//endmain