#include<stdio.h>

int main ()
{
    int n,i,j,s,v;
    printf("Enter the Number of Rows: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(s=1;s<=(n-i);s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==1||j==1)
            {
                v=1;
            }
            else
            {
                v=v*(i-j+1)/(j-1);
            }
             printf(" %d",v);
        }

           printf("\n");
    }

    return 0;

}
