#include<stdio.h>

int main()
{
    int a[50],n,i,choice,sum=0;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\n1. Display");
    printf("\n2. Sum");

    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            for(i=0;i<n;i++)
                printf("%d ",a[i]);
            break;

        case 2:
            for(i=0;i<n;i++)
                sum=sum+a[i];

            printf("Sum = %d",sum);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}