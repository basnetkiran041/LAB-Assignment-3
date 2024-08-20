
/*Write a program to generate a fibonacci series. */
#include<stdio.h>

int main()
{
    int n = 10;
    int n1 = 0, n2 = 1, next;

    printf("The fibonacci series up to %d :\n", n);
    for(int i = 1; i < n; i++){
        if(i<=1){
            next = i;
        }
        else{
            next = n1 + n2;
            n1 = n2;
            n2 = next;
        }
        printf("%d \n", next);
    }
    return 0;
    


}