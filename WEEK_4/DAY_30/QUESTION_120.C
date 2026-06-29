#include<stdio.h>
#include<string.h>

void display(char name[], int roll)
{
    printf("\n--- Student Details ---");
    printf("\nName: %s", name);
    printf("\nRoll Number: %d", roll);
}

int main()
{
    char name[20];
    int roll;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    display(name, roll);

    return 0;
}