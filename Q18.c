#include <stdio.h>

int main() {
    int i, j;

    // Loop through numbers 1 to 10 for which tables will be printed
    for (i = 1; i <= 10; i++) {
        printf("Table of %d:\n", i);
        
        // Loop to print the multiplication table for the current number
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        
        printf("\n"); // Print a newline for better readability between tables
    }

    return 0;
}
