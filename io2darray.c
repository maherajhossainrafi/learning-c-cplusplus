#include<stdio.h>

int main()
{
    int r,c,i,j;

    printf("Enter the number of rows: ");
    scanf("%d",&r);

    printf("Enter the number of columns: ");
    scanf("%d",&c);

    int a[r][c];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value of index a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    
    }

    printf("\nGiven 2D Array: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    
    }



}