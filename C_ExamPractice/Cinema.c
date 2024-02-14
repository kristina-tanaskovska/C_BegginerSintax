#include<stdio.h>

//Prototyping functions
void seatPrint(char* ptrArray[]);
void reservedSeat(char* ptrArray[], int* ptrSeat);

int main() {
    char cChoice;
    int dSeatNum;
    int* ptrSeat = &dSeatNum;

    // Initializing array variables and assigning pointer values
    char array[101];
    char* ptrArray[101];
    for (int i = 1; i <= 100; ++i) {
        array[i] = 'A';
        ptrArray[i] = &array[i]; 
    }

    seatPrint(ptrArray);//Function that shows initial avvailable seats

    printf("Pelase enter the seat number you want to reserve: ");
    scanf("%d", &dSeatNum);

    reservedSeat(ptrArray, ptrSeat);
    seatPrint(ptrArray);

    while (cChoice != 'n') {
        printf("\nWould you like to reserve another seat? (y/n): ");
        scanf(" %c", &cChoice);

        switch (cChoice) {
            case 'y':
                printf("Pelase enter the seat number you want to reserve: ");
                scanf("%d", &dSeatNum);

                reservedSeat(ptrArray, ptrSeat);
                seatPrint(ptrArray);
                break;
            case 'n':
                printf("Thank you for using our service.\n");
                return 0;
            default:
                printf("Invalid choice! Please enter 'y' or 'n'.\n");
        }
    }


    return 0;
}//end main

void seatPrint(char* ptrArray[]) {
    for (int i = 1; i <= 100; ++i) {
        printf("%c ", *ptrArray[i]);
        if (i % 10 == 0) {
            printf("\n"); // Print a new line after every 10 seats
        }
    }
}//end print

void reservedSeat(char* ptrArray[], int* ptrSeat){
*ptrArray[(*ptrSeat)+1]='_';
printf("Seat reservation is succesfull");

}//end reservation
