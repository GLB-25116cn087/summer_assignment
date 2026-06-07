#include <stdio.h>

int main() {
    int n, t, rem, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    t = n;

    while(t> 0) {
        rem = t % 10;
        fact = 1;

        for(i = 1; i <= rem; i++)
            fact *= i;

        sum += fact;
        t /= 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}