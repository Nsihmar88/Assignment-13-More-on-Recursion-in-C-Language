// Write a recursive function to print first N terms of Fibonacci series.

#include<stdio.h>

int Fibonacci(int); //function declaration
int main ()
{
    int number,i;
    printf("\nEnter Number: ");
    scanf("%d",&number);
    for(i=0; i<=number;i++)
        printf("%d",Fibonacci(i)); //function call
    return 0;
}
int Fibonacci(int num) //function definition
{   
    if(num==0 || num==1) //base condition
        return num;
    return Fibonacci(num-1)+Fibonacci(num-2); //recursive function call
}