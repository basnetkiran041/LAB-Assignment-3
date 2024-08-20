/* Write a program to display following:
11111
2222
333
44
5*/

#include<stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        for(int j=5; j>=i; j--){
            printf("%d", i);
        }
        printf("\n");
    }
}