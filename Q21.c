/*Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.*/

#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    // Input two numbers
    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate base^exponent using a loop
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    // Output the result
    printf("%d raised to the power of %d is %lld\n", base, exponent, result);

    return 0;
}

