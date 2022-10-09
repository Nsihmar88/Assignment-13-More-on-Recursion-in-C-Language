// Write a recursive function to calculate sum of first N odd natural numbers.

#include<stdio.h>

int Sum_N_Odd(int); //function declaration
int main()
{
    int number;

    printf("\nEnter a number to Calculate Sum of N Odd Natural Numbers: ");
    scanf("%d",&number);
    printf("\nSum of %d Numbers is %d.",number,Sum_N_Odd(number)); //function call
    return 0;
}
int Sum_N_Odd(int number) //function definition
{   
    int sum=0; 
    if (number>=1) //base condition
        sum=(2*number-1)+Sum_N_Odd(number-1); //recursive function call
    return sum;   
}