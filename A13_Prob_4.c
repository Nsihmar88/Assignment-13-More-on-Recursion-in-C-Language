// Write a recursive function to calculate sum of squares of first n natural numbers.

#include<stdio.h>

int Sum_Sq_N_Number(int); //function declaration
int main()
{
    int number;

    printf("\nEnter a number to Calculate Sum of N Even Natural Numbers: ");
    scanf("%d",&number);
    printf("\nSum of %d Numbers is %d.",number,Sum_Sq_N_Number(number)); //function call
    return 0;
}
int Sum_Sq_N_Number(int number) //function definition
{   
    int sum=0; 
    if (number>=1) //base condition
        sum=(number*number)+Sum_Sq_N_Number(number-1); //recursive function call
       
    return sum;   
}