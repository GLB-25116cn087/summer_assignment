#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    float m1, m2, m3;
    float total, percentage;
};

int main()
{
    struct student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter details of student %d\n", i+1);

        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].percentage = s[i].total / 3;
    }

    printf("\n===== MARKSHEET =====\n");

    for(i=0; i<n; i++)
    {
        printf("\nRoll No: %d",s[i].roll);
        printf("\nName: %s",s[i].name);
        printf("\nTotal Marks: %.2f",s[i].total);
        printf("\nPercentage: %.2f",s[i].percentage);

        if(s[i].percentage >= 40)
            printf("\nResult: Pass\n");
        else
            printf("\nResult: Fail\n");
    }

    return 0;
}