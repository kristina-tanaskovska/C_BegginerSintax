/*Write a program which has student‘s grades
stored in an array. Enter 3 grades in an array and
calculate the average.
*/
#include <stdio.h>

// Function prototype
void inputValidation(int argc, char *argv[]);

int main(int argc, char *argv[]) {
    // Call the inputValidation function
    inputValidation(argc, argv);

    return 0;
}

// Function definition
void inputValidation(int argc, char *argv[]) {
    if (argc != 4) {
        printf("\n Usage: %s <arg1> <arg2> <arg3>", argv[0]);
        // No return statement here, as this function is declared as void
    }
}

