#include <stdio.h>
int armstrong(int n)
{
    int temp=n, sum=0, rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    return temp==sum;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}