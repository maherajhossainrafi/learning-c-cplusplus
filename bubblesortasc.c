#include<stdio.h>
 int main()
 {
    int n,i,j,temp;

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


    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
     printf("\nSorted Array: ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;


 }