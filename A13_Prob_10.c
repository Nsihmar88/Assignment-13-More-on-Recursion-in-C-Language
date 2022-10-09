// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int power(int,int); //function declaration
int main ()
{
    int number,pow;
    printf("\nEnter base number: ");
    scanf("%d",&number);
    printf("\nEnter power value: ");
    scanf("%d",&pow);
    printf("\nResult is %d.",power(number,pow));//function call
    return 0;
}
int power(int num,int pow) //function definition
{   
    
    if(pow==0) //base condition
        return 1;
    else
        return (num*power(num,pow-1));  //recursive function call  
}