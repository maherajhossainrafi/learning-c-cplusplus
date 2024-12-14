#include<stdio.h>
 int main()
 {
    int n, i, max,min;

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

    max=a[0];
    min=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }

    printf("\nMAX: %d",max);
    printf("\nMIN: %d",min);

    return 0;

 }