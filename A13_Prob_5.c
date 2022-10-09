// Write a recursive function to calculate sum of digits of a given number.

#include<stdio.h>

int Sum_Digit_Number(int); //function declaration
int main()
{
    int number;

    printf("\nEnter a number to Calculate Sum of Digits of Numbers: ");
    scanf("%d",&number);
    printf("\nSum of %d Numbers is %d.",number,Sum_Digit_Number(number)); //function call
    return 0;
}
int Sum_Digit_Number(int number) //function definition
{   
    int sum=0; 
    if (number>=1) //base condition
        sum=(number%10)+Sum_Digit_Number(number/10);  //recursive function call     
    return sum;   
}