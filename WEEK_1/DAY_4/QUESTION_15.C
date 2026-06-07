#include<stdio.h>
int main(){
    int n,t,r,s=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
       s=s+r*r*r;
        n=n/10;
    }
    if(s==t)
    printf("Armstrong number");
    else
    printf("Not Armstrong number");
    return 0;
}
