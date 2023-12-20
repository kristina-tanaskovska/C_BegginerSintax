/*
	ask for 5 inputs from user
	chategorz a and b
	if this input belongs to a put it in a, if not then in b
	if both in a put both in a
	more print statements
	output input and if statements

	switch(dInput){
	case 5: //do something
	case dChech: // compare variables as long theyre the same datatype
	}

	ask the user for how many & to print , print them in one line
	however create a new line every two &&
*/
#include<stdio.h>

int main(){

	//declare var
	int dLength;
	
	printf("\n GIVE me how many \'&\' do you want to print ");
	scanf("%d", &dLength);


	for(int i=0; i<dLength; i++){
//if you put if here its different then under print &
		if(i %2==0){ //if even
			printf("\n");
		}//end if
		printf("&");
	}//end for

	printf("\n\n");

		for(int i=1; i<=dLength; i++){

		printf("&");

		//if you put if here its different then under print &
		if(i %2==0){ //if even
			printf("\n");
		}//end if
	}//end for

	return 0;
}//end main