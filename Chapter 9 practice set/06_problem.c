#include <stdio.h>
#include <string.h>
typedef struct banckacc
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
        printf("Enter the name : ");

        gets(person[i].name);
        fflush(stdin);
        printf("Enter the accNo : ");

        scanf("%d", &person[i].accNo);

        printf("Enter the IFSC : ");

        gets(person[i].ifsc);
        fflush(stdin);
        printf("Enter the balance : ");

        scanf("%f", &person[i].balance);
    }
    for (int i = 0; i < 5; i++)
    {
        display(person[i]);
    }

    return 0;
}
void display(bank person)
{
    printf("Name = %s\n, A/c No = %d\n,IFSC code = %s\n,Balance = %d\n", person.name, person.accNo, person.balance, person.ifsc);
}