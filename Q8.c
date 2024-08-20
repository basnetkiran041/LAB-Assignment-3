// Write a program to print all the numbers from a to z using while loop

#include<stdio.h>
int main()
{
    char ch = 'a';
    while(ch <= 'z'){
        printf("%c\n",ch);
        ch++;

    }
    return 0;
}