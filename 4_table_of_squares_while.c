/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("This program prints a table of squares.\n");

    printf("Enter number of enteries in table: ");
    scanf("%d", &n);


    i = 1;
    while (i <= n)
    {
        printf("%10d%10d\n", i, i * i);
        i++;
    }

    return 0;
    
}