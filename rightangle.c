#include <stdio.h>

int main() {
    int row = 5; // Number of rows

    // Upper part of the butterfly pattern
    for (int i = 1; i <= row; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for (int k = 1; k <= (row - i) * 2; k++) {
            printf("  ");
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part of the butterfly pattern
    for (int i = row; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for (int k = 1; k <= (row - i) * 2; k++) {
            printf("  ");
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
