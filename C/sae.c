#include<studo.h>
#include <string.h>
#include<stdlib.h>

struct Bank
{
	int accountNum;
	char Name[50];
	float balance;
};


	void addAccount(struct Bank myAccount[], int *accountNum);


int main(){
	struct Bank accounts[50];
	int accountNum = 0;
	int *p=&accountNum;
	int choice;

	do {
		printf("\nBank Account Management System\n");
        printf("1. Add New Account\n");
        printf("2. Display Account Details by Account Number\n");
        printf("3. Deposit Amount\n");
        printf("4. Withdraw Amount\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
	scanf("%d",&choice); 
	

}while(choice != 5); //if the choice is 5 then exit program

	return 0;
	}