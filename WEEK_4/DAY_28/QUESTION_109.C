#include<stdio.h>

struct book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct book b[50];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter details of book %d\n", i+1);

        printf("Enter book ID: ");
        scanf("%d",&b[i].id);

        printf("Enter book name: ");
        scanf("%s", b[i].name);

        printf("Enter author name: ");
        scanf("%s", b[i].author);
    }

    printf("\n===== Library Records =====\n");

    for(i=0; i<n; i++)
    {
        printf("\nBook ID: %d", b[i].id);
        printf("\nBook Name: %s", b[i].name);
        printf("\nAuthor: %s\n", b[i].author);
    }

    return 0;
}