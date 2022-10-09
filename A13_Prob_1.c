//Write a recursive function to calculate sum of first N natural numbers.

#include<stdio.h>

int Sum_N_Natural(int); //function declaration
int main()
{
    int number;

    printf("\nEnter a number to Calculate first N Natural Numbers: ");
    scanf("%d",&number);
    printf("Sum of %d Natural Numbers is %d.",number,Sum_N_Natural(number)); //function call
    return 0;
}
int Sum_N_Natural(int number) //function definition
{   
    int sum;
    if (number>=1) //base condition
        sum=number+Sum_N_Natural(number-1); //recursive function call
    return sum;
}