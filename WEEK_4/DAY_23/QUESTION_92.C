#include<stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        count[(int)str[i]]++;
    }

    for(i=0; str[i]!='\0'; i++)
    {
        if(count[(int)str[i]] > max)
        {
            max = count[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d", max);

    return 0;
}