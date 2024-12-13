#include<stdio.h>
#include<math.h>

int main ()
{
    int num,temp1,temp2,lastdigit,sum=0, count=0;
    double ld;

    printf("Enter the Number: ");
    scanf("%d",&num);

    temp1=temp2=num;

    while(temp1!=0)
    {
        temp1=temp1/10;
        count++;
    }

    while(temp2!=0)
    {
        lastdigit=temp2%10;
        ld=pow(lastdigit,count);
        sum=sum+ld;
        temp2=temp2/10;
    }

    if(sum==num)
    {
         printf("Given number is an armstrong number");
    }
    else
    {
         printf("Given number is not an armstrong number");
    }

    return 0;

}

    
   