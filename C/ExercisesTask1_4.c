#include <stdio.h>

int main() {
    int dVar1 = 5;

    for (int i = 0; i <= dVar1; i++) {
        // Print spaces before stars
        for (int j = 0; j < dVar1 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }


    for (int i = 0; i <= dVar1; i++) {
        // Print spaces before stars
        for (int j = 0; j < dVar1 - i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
