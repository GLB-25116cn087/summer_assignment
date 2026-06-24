#include<stdio.h>

int main()
{
    char str[100], result[100];
    int i, j = 0, k, found;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        found = 0;

        for(k=0; k<j; k++)
        {
            if(str[i] == result[k])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing duplicates = %s", result);

    return 0;
}