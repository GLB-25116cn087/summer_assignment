#include <stdio.h>
int main()
{
    int n,a=0,b=1,i=3,c;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    while(i<=n)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
        i=i+1;
    }
    return 0;
} 