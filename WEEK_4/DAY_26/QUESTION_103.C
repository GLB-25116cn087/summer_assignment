#include<stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int balance = 10000;
    int choice, amount;

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin)
    {
        printf("Wrong PIN");
        return 0;
    }

    do
    {
        printf("\n\nATM MENU");
        printf("\n1. Check Balance");
        printf("\n2. Withdraw Money");
        printf("\n3. Deposit Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance = %d", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);

                if(amount <= balance)
                {
                    balance = balance - amount;
                    printf("Please collect your money");
                    printf("\nRemaining Balance = %d", balance);
                }
                else
                {
                    printf("Insufficient balance");
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);

                balance = balance + amount;
                printf("Money deposited successfully");
                printf("\nNew Balance = %d", balance);
                break;

            case 4:
                printf("Thank you for using ATM");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}