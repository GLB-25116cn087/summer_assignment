#include<stdio.h>

struct student
{
    int roll;
    char name[20];
};

int main()
{
    struct student s[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);
    }

    printf("\n--- Student Records ---");

    for(i=0; i<n; i++)
    {
        printf("\nRoll Number: %d",s[i].roll);
        printf("\nName: %s\n",s[i].name);
    }

    return 0;
}