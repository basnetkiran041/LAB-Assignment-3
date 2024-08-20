#include <stdio.h>

int main() {
    int i, j, k;
    int n = 7; // Number of rows

    for (i = 0; i < n; i++) {
        // Print the left side of the pattern
        for (j = 0; j < n - i; j++) {
            printf("%c", 'A' + j);
        }

        // Print spaces in the middle
        for (k = 0; k < i; k++) {
            printf(" ");
        }
        for (k = 1; k < i; k++) {
            printf(" ");
        }

        // Print the right side of the pattern
        for (j = n - i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
