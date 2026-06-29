#include<stdio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e;

    printf("Enter employee id: ");
    scanf("%d",&e.id);

    printf("Enter employee name: ");
    scanf("%s",e.name);

    printf("Enter employee salary: ");
    scanf("%f",&e.salary);

    printf("\n--- Employee Details ---");
    printf("\nEmployee ID: %d",e.id);
    printf("\nEmployee Name: %s",e.name);
    printf("\nEmployee Salary: %.2f",e.salary);

    return 0;
}