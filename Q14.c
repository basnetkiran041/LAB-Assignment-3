/*Write a program to generate following outputs 
1             55555
22            4444
333           333
4444          22 */

#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1; j<=i;j++){
            printf("%d", i);
        }
    printf("\t");

    for(int j=5; j>=i; j--){
        printf("%d", j);
    }
    printf("\n");

    }
    return 0;
}