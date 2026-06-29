#include<stdio.h>

struct library
{
    int book_id;
    char book_name[30];
    char author[30];
};

int main()
{
    struct library b;

    printf("Enter book ID: ");
    scanf("%d",&b.book_id);

    printf("Enter book name: ");
    scanf("%s",b.book_name);

    printf("Enter author name: ");
    scanf("%s",b.author);

    printf("\n--- Library Details ---");
    printf("\nBook ID: %d",b.book_id);
    printf("\nBook Name: %s",b.book_name);
    printf("\nAuthor Name: %s",b.author);

    printf("\nBook added successfully.");

    return 0;
}