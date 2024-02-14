#include<stdio.h>
#include<stdlib.h> 

struct Accounts{
	int dAccountNum;
	char cHolderName;
	char cType;
	int dBalans;

};

void addAccount(struct Accounts accounts[], int *numAccounts);
void displayAccount(struct Accounts accounts[], int* numAccounts, int* AccountNumberInput);

int main(){
	struct Accounts bankAccounts[100];
	int numAccounts =0;
	int choice;

	int *ptr = &numAccounts;

	printf("\n MENU \n");
	printf("\n 1. Add account \n");
	scanf("%d", &choice);

do{
switch (choice){
	case 1: {
		addAccount(bankAccounts, ptr);
		break;


	
	}//end case 1
	case 2:{
		int dAccountNumberUser;
		int *ptrdAccountNumberUser = &dAccountNumberUser;
		printf("\n Enter account number: ");
		scanf("%d", &dAccountNumberUser);
		displayAccount(bankAccounts,ptr,ptrdAccountNumberUser);

	}//end case 2
	case 5:{
		printf("\n Program exited \n");
		break;
	}//end case 5





	default:
		printf("\n Error: wrong input \n");
		break;
}



}while(choice <=5); //endwhile

//ptr = NULL;
//free(ptr);
	return 0;
}//endmain

void addAccount(struct Accounts account[], int* numAccounts){

	printf("\n Enter account name \n");
	scanf("%d", &account[*numAccounts].dAccountNum);
	printf("\n Enter C-Current, P-pension");
	scanf(" %c", &account[*numAccounts].cType);

	(*numAccounts)++;
	printf("\n New account succesfuly added \n");
}//end addAcount function




void displayAccount(struct Accounts accounts[], int* numAccounts, int* AccountNumberInput){
for (int i=0; i< *numAccounts; i++){
	if(accounts[i].dAccountNum == *AccountNumberInput){
		printf("Account name: %c", accounts[i].cHolderName);
		printf("Account name: %d", accounts[i].dBalans);
	}//end if
	else{
		printf("\n Account doesnt exits \n");
	}//end else
}//end for 


}//end displayAcount function