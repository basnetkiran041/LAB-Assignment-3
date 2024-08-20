/*Write a program to find the sum of digits of any numbers*/
#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Make the number positive if it's negative
    number = (number < 0) ? -number : number;

    // Calculate the sum of the digits
    while (number != 0) {
        // Extract the last digit
        digit = number % 10;
        // Add the digit to the sum
        sum += digit;
        // Remove the last digit from the number
        number /= 10;
    }

    // Output the sum of the digits
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
