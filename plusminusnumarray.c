#include<stdio.h>
 int main()
 {
    int n, i;

    printf("Enter the number of element of the array: ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("Element at Index %d: ",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nPositive Elements: ");
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }

    printf("\nNegative Elements: ");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;

 }