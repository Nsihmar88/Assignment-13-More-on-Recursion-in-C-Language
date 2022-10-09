// Write a recursive function to calculate sum of first N Even natural numbers.

#include<stdio.h>

int Sum_N_Even(int); //function declaration
int main()
{
    int number;

    printf("\nEnter a number to print Sum of N Even Natural Numbers: ");
    scanf("%d",&number);
    printf("\nSum of %d Numbers is %d.",number,Sum_N_Even(number)); //function call
    return 0;
}
int Sum_N_Even(int number) //function definition
{   
    int sum=0; 
    if (number>=1) //base condition
        sum=(2*number)+Sum_N_Even(number-1); //recursive function call
    return sum;   
}