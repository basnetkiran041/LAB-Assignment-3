/*Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.*/
#include<stdio.h>
int main()
{
    int n;
    int pstv =0, ngtv =0, zero =0 ;
    char user;


    do{
    printf("Enter any number: ");
    scanf("%d",&n);

    if(n>0){
        pstv++;
    }
    else if(n<0){
        ngtv++;
    }
    else{
        zero++;
    }
        printf("Do you want to enter any other number? (y/n):");
        scanf(" %c",&user);
    }
    while(user == 'y' || user =='Y');{
        printf("\nCount of positive numbers: %d\n",pstv);
        printf("Count of negative numbers: %d\n",ngtv);
        printf("Count of zeros: %d\n",zero);
    }

        
    

return 0;
}