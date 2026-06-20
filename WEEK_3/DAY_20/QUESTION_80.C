#include<stdio.h>
int main()
{
    int a[10][10];
    int r, c, i, j, sum;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nColumn-wise sum:\n");
    for(j=0;j<c;j++)
    {
        sum = 0;
        for(i=0;i<r;i++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of column %d = %d\n", j+1, sum);
    }
    return 0;
}