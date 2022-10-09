//Write a recursive function to calculate HCF of two numbers.

#include<stdio.h>

int HCF(int,int); //function declaration
int main()
{
    int number1,number2,result;

    printf("\nEnter Numbers to calculate HCF of Numbers:");
    printf("\nEnter First Number: ");
    scanf("%d",&number1);
    printf("\nEnter Second Number: ");
    scanf("%d",&number2);

    result=HCF(number1,number2); //function call
    printf("HCF of %d and %d is %d.",number1,number2,result);
    return 0;
}
int HCF(int number1,int number2) //function definition
{
    if (number1==0) //base condition
        return number2;
    if (number2==0) //base condition
        return number1;
    if (number1>number2) //base condition
        return HCF(number1%number2,number2); //recursive function call  
    else 
        return HCF(number1,number2%number1); //recursive function call     
}