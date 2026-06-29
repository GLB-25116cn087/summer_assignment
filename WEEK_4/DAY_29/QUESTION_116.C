#include<stdio.h>

struct item
{
    int id;
    char name[20];
    int quantity;
};

int main()
{
    struct item i;

    printf("Enter item id: ");
    scanf("%d",&i.id);

    printf("Enter item name: ");
    scanf("%s",i.name);

    printf("Enter quantity: ");
    scanf("%d",&i.quantity);

    printf("\n--- Inventory Details ---");
    printf("\nID: %d",i.id);
    printf("\nName: %s",i.name);
    printf("\nQuantity: %d",i.quantity);

    return 0;
}