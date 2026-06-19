#include<stdio.h>

int main()
{
    int arr[100],n,key,i,low,high,mid;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter sorted array");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("enter element to search ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==key)
        {
            printf("Element found");
            return 0;
        }
        else if(key<arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }

    printf("Element not found");

    return 0;
}