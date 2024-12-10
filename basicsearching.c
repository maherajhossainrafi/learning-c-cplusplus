#include<stdio.h>

int main ()
{
    int a,size,i=0,count=0;
    int x[]={24,64,38,142,110,120,82,64};

    size=sizeof(x)/sizeof(x[0]);

    printf("Enter what number are you looking for: ");
    scanf("%d",&a);
    
    for(i=0;i<size;i++)
    {
        if(x[i]==a)
        {
            printf("Number found at index %d\n",i);
            count++;
        }
    }

    if(count==0)
    {
        printf("Given number not found");
    
    }
    else
    {
        printf("Given number found %d times",count);
    }
}