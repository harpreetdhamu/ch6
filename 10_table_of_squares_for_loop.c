/*
The square.c program (Section 6.1) can be improved by converting its while loop to a fo loop:
Prints a table of squares using a for statement
*/

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This proram prints a table of squares.\n");
    printf("Enter number of enteries in the table: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
        printf("%10d%10d\n", i, i * i);

    return 0;
}