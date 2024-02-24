/*
The program will offer the user a menu of choices: clear the account
balance, credit money to the account, debit money from the account, display the
current balance, and exit the program. The choices are represented by the integers
0, 1, 2, 3, and 4, respectively. Here’s whal a session with the program will look
like:
*** ACME checkbook-balancing program ***
Commands: 0=clear, l=credit, 2=debit, 3=balance, 4=exit 

Refer page no. 141
*/

#include <stdio.h>

int main(void)
{
    int cmd;
    float credit, debit, balance = 0.0f;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, l=credit, 2=debit, ");
    printf("3=balance, 4=exit\n\n");

    for ( ; ;)
    {
        printf("Enter Command: ");
        scanf("%d", &cmd);

        switch (cmd)
        {
            case 0:
                balance = 0.0f;
                break;

            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;

            case 2:
                printf("Enter amount to debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;

            case 3:
                printf("Current balance: %.2f\n", balance);
                break;

            case 4:
                return 0;

            default:
                printf("Commands: 0=clear, l=credit, 2=debit, ");
                printf("3=balance, 4=exit\n\n");
                break;



        }
    }
}