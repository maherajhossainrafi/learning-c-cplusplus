#include<stdio.h>
#include <stdlib.h>
 int main()
 {
    int n, num, i, freq;

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

    A:

    freq=0;

    printf("\nEnter a number from the array to find its frequency: ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            freq++;
        }
    }


    if(freq>0)
    {
        printf("\nFrequency of %d is %d times",num,freq);
    }
    else
    {
        printf("Number not found, please try again");
    }

    getchar();
    getchar();
    system("cls");
    goto A;

    return 0;

 }