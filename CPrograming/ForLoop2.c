#include<stdio.h>

int main(){
	int dInput;
	scanf("%d", &dInput);
	for(int i=dInput; i> 0; i--){
		for(int j=0; j<i; j++){
			printf("x");
		}
		printf("\n");
	}
	return 0;
}// end main