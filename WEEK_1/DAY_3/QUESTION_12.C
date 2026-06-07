#include<stdio.h>

int main()
{
    int a, b, max, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    max = (a > b) ? a : b;

    for(i = max; ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}