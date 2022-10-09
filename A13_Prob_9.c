// Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int cou_digi(int); //function declaration
int main ()
{
    int number,result=0;
    printf("\nEnter Number to count the digits: ");
    scanf("%d",&number);
    result=cou_digi(number); //function call
    printf("%d",result);
    return 0;
}
int cou_digi(int num) //function definition
{   
    static int count=0;
    if(num>0) //base condition
    {   
        count=count+1; 
        return cou_digi(num/10); //recursive function call   
    }
    else
        return(count);    
}