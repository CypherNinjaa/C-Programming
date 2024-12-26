#include <stdio.h>
#include <string.h>

typedef struct bankacc
{
    int accNo;
    char name[34];
    char ifsc[12];
    float balance;
} bank;

void display(bank person);

int main()
{
    bank person[5];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name: ");
        scanf(" %[^\n]", person[i].name); // Read a string with spaces

        printf("Enter the IFSC: ");
        scanf("%s", person[i].ifsc); // Read IFSC (single word)

        printf("Enter the accNo: ");
        scanf("%d", &person[i].accNo);

        printf("Enter the balance: ");
        scanf("%f", &person[i].balance);
    }

    printf("\nDisplaying Account Details:\n");
    for (int i = 0; i < 2; i++)
    {
        display(person[i]);
    }

    return 0;
}

void display(bank person)
{
    printf("Name = %s\nA/c No = %d\nIFSC code = %s\nBalance = %.2f\n\n",
           person.name, person.accNo, person.ifsc, person.balance);
}
