/*
    This program works and searches for the perfect numbeers
    in a function froma a range inputed from the user
*/

#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 1; // Start with 1 because every number is divisible by 1

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }

    return (sum == num);
}

int main() {
    int start, end;

    // Get user input for the range
    printf("Enter the starting range: ");
    scanf("%d", &start);

    printf("Enter the ending range: ");
    scanf("%d", &end);

    // Validate the input range
    if (start > end || start <= 0 || end <= 0) {
        printf("Invalid input. Please enter a valid range.\n");
        return 1; // Exit with an error code
    }

    // Print perfect numbers within the given range
    printf("Perfect numbers in the range %d to %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0; // Exit successfully
}