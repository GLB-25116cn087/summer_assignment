#include<stdio.h>
int main(){
    int i,n,c=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        c=c+1;
    }
    printf(" The no of digits are %d",c);
    return 0;
}