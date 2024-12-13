#include<stdio.h>

int main ()
{
    int num;

    printf("Enter the Number: ");
    scanf("%d",&num);

    if(num%7==0||num%10==7)
    {
        printf("Given number is a buzz number");
    }
    else
    {
        printf("Given number is not a buzz number");
    }

    return 0;
}

