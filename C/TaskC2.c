#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enumeration for account types
enum AccountType {
    Current,
    Savings,
    Pension,
    Youth
};

// Structure definition for an account
struct Account {
    int accountNumber;
    char holderName[50];
    float balance;
    enum AccountType type;
};

// Function prototypes
void addAccount(struct Account accounts[], int *numAccounts);
void displayAccountDetails(const struct Account accounts[], int numAccounts, int accountNumber);
void depositAmount(struct Account accounts[], int numAccounts, int accountNumber, float amount);
void withdrawAmount(struct Account accounts[], int numAccounts, int accountNumber, float amount);

int main() {
    struct Account bankAccounts[100];  // Assuming a maximum of 100 accounts
    int numAccounts = 0;
    int choice;

    do {
        // Display menu
        printf("\nBank Account Management System\n");
        printf("1. Add New Account\n");
        printf("2. Display Account Details by Account Number\n");
        printf("3. Deposit Amount\n");
        printf("4. Withdraw Amount\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addAccount(bankAccounts, &numAccounts);
                break;
            case 2: {
                int accountNumber;
                printf("Enter Account Number: ");
                scanf("%d", &accountNumber);
                displayAccountDetails(bankAccounts, numAccounts, accountNumber);
                break;
            }
            case 3: {
                int accountNumber;
                float amountToDeposit;  // Rename the variable
                  printf("Enter Account Number: ");
                   scanf("%d", &accountNumber);
                    printf("Enter Deposit Amount: ");
                    scanf("%f", &amountToDeposit);
                   depositAmount(bankAccounts, numAccounts, accountNumber, &amountToDeposit);
                   break;
            }

            case 4: {
                int accountNumber;
                float withdrawalAmount;
                printf("Enter Account Number: ");
                scanf("%d", &accountNumber);
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &withdrawalAmount);
                withdrawAmount(bankAccounts, numAccounts, accountNumber, &withdrawalAmount);
                break;
            }
            case 5:
                printf("Exiting the program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}

// Function to add a new account
void addAccount(struct Account accounts[], int *numAccounts) {
    printf("\nEnter Account Details:\n");

    printf("Account Number: ");
    scanf("%d", &accounts[*numAccounts].accountNumber);

    printf("Holder's Name: ");
    scanf("%s", accounts[*numAccounts].holderName);

    printf("Initial Balance: ");
    scanf("%f", &accounts[*numAccounts].balance);

    int accountTypeChoice;
    printf("Account Type (1: Current, 2: Savings, 3: Pension, 4: Youth): ");
    scanf("%d", &accountTypeChoice);
    accounts[*numAccounts].type = (enum AccountType)(accountTypeChoice - 1);

    (*numAccounts)++;
    printf("Account added successfully!\n");
}

// Function to display account details by account number
void displayAccountDetails(const struct Account accounts[], int numAccounts, int accountNumber) {
    int found = 0;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            printf("\nAccount Details:\n");
            printf("Account Number: %d\n", accounts[i].accountNumber);
            printf("Holder's Name: %s\n", accounts[i].holderName);
            printf("Balance: %.2f\n", accounts[i].balance);
            printf("Account Type: %d\n", accounts[i].type + 1);  // Adding 1 to match the choice in the menu
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account with Account Number %d not found.\n", accountNumber);
    }
}

// Function to deposit amount into an account
void depositAmount(struct Account accounts[], int numAccounts, int accountNumber, float amount) {
    int found = 0;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            accounts[i].balance += amount;
            printf("Deposit successful! Updated Balance: %.2f\n", accounts[i].balance);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account with Account Number %d not found.\n", accountNumber);
    }
}

// Function to withdraw amount from an account
void withdrawAmount(struct Account accounts[], int numAccounts, int accountNumber, float amount) {
    int found = 0;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == accountNumber) {
            if (accounts[i].balance >= amount) {
                accounts[i].balance -= amount;
                printf("Withdrawal successful! Updated Balance: %.2f\n", accounts[i].balance);
            } else {
                printf("Insufficient funds for withdrawal.\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account with Account Number %d not found.\n", accountNumber);
    }
}
