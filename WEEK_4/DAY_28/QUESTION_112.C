#include<stdio.h>

struct ticket
{
    int ticket_no;
    char name[20];
    int age;
};

int main()
{
    struct ticket t;

    printf("Enter ticket number: ");
    scanf("%d",&t.ticket_no);

    printf("Enter passenger name: ");
    scanf("%s",t.name);

    printf("Enter age: ");
    scanf("%d",&t.age);

    printf("\n--- Ticket Details ---");
    printf("\nTicket Number: %d",t.ticket_no);
    printf("\nPassenger Name: %s",t.name);
    printf("\nAge: %d",t.age);

    printf("\nTicket booked successfully.");

    return 0;
}