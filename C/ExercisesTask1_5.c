#include<stdio.h>

int main(){
	int dN=6;
	for(int i=0; i<=dN; i++){
		for(int j=0; j<=dN; j++){
			if(i==0 || i==dN || j==0 || j==dN){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}


	return 0;
}//endmain