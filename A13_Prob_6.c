//Write a recursive function to calculate factorial of a given number.

#include<stdio.h>

int fact(int); //function declaration
int main()
{
    int number,result; 

    printf("\nEnter a number to calculate factorial of Number: ");
    scanf("%d",&number);

    result=fact(number); //function call
    printf("Factorial of %d is %d.",number,result);
    return 0;
}
int fact(int number) //function definition
{
    int result=0;
    if (number==0 || number==1) //base condition
        return 1;
    result=number*fact(number-1); //recursive function call
    return (result);    
}