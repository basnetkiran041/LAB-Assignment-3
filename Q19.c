/*Write a program to display square if it is odd and cube if it is even ranging from 1-20*/
#include <stdio.h>

int main() {
    int i;

    // Loop through numbers from 1 to 20
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            // If the number is even, print its cube
            printf("The cube of %d is %d\n", i, i * i * i);
        } else {
            // If the number is odd, print its square
            printf("The square of %d is %d\n", i, i * i);
        }
    }

    return 0;
}
