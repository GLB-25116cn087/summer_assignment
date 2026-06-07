#include<stdio.h>
int main(){
    int n,t,d,r=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        d=n%10;
       r=r*10+d;
        n=n/10;
    }
    if(r==t)
    printf("Palindrome number");
    else
    printf("Not palindrome number");
    return 0;
}
