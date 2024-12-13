#include<stdio.h>

int main ()
{
    int num,temp,result=0,reminder;

    printf("Enter the Number: ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        reminder=temp%10;
        result=(result*10)+reminder;
        temp=temp/10;
    }

    if(result==num)
    {
        printf("Number is a palindrome number");
    }
    else
    {
        printf("Number is not a palindrome number");
    }
    
    return 0;

}