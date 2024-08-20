// Write a program to print all the numbers from 10 to 1 and find their sum using while loop

#include<stdio.h>
int main()
{
    int i = 10;
    int sum = 0;
        printf("The numbers are as follow:\n");
    while(i>=1){
        printf("%d\n",i);
        sum +=i;
        i--;
    }
    printf("The sum of from 10 to 1 is : %d\n",sum);

}