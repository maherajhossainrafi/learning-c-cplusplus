#include<stdio.h>
 int main()
 {
    int n, i, sum=0;

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

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\nSum: %d",sum);

    return 0;

 }
