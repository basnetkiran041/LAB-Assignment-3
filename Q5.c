/*Write a program to print out all Armstrong numbers between 1 and 500.
[Hint: If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153=(1*1*1)+(5*5*5)+(3*3*3)]*/

#include<stdio.h>
int main()
{
    int i, original_n, rem, result;
    printf("Amstrong numbers between 1 and 500 are :\n");
    for(int i=1; i<=500; i++){
        original_n=i;
        result=0;

        while (original_n != 0)
        {
            rem = original_n % 10;
            result += rem*rem*rem;
            original_n /=10; 
        }
        if(result==i){
            printf("%d\n", i);
        }
        
    }
return 0;
}