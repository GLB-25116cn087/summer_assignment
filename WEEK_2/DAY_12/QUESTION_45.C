#include <stdio.h>
int palindrome(int n)
{
    int rev=0, temp=n, rem;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return temp==rev;
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}