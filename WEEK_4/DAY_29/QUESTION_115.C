#include<stdio.h>
#include<string.h>

int main()
{
    char str[50],rev[50];
    int choice,i;

    printf("Enter string: ");
    scanf("%s",str);

    printf("\n1. Find length");
    printf("\n2. Reverse string");

    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Length = %d",strlen(str));
            break;

        case 2:
            for(i=0;i<strlen(str);i++)
                rev[i]=str[strlen(str)-i-1];

            rev[i]='\0';

            printf("Reverse = %s",rev);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}