#include<stdio.h>
int main(){
    int i,n,d,s=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("the sum of digit is =%d",s);
    return 0;
}
