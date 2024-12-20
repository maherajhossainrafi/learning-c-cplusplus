#include<stdio.h>

 int main()
 {
    int n, i,j,status=0,num, mid, pos;

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

    printf("\nEnter the number you are looking for: ");
    scanf("%d",&num);

    i=0, j=n-1;


    while(i<=j)
    {
        mid=(i+j)/2;
        if(a[mid]==num)
        {
            status=1;
            pos=mid+1;
            break;
        }

        else if(a[mid]>num)
        {
            i=mid-1;
        }
        else if(a[mid]<num)
        {
            i=mid+1;
        }
        

    }

    if(status==1)
    {
        printf("Given Number found at %d position", pos);
    }
    else
    {
        printf("Given Number not found");
    }

    return 0;

 }