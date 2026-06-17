#include<stdio.h>

int main()
{
    int arr[100], n, i, sum=0, total;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    total=(n+1)*(n+2)/2;

    printf("Missing number = %d", total-sum);

    return 0;
}