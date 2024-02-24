/*
The break statement is particularly useful for writing loops in which the exit
point is in the middle of the body rather than at the beginning or end. Loops that
read user input, terminating when a particular value is entered, often fall into this
category:

Program to validate user input.
*/

#include <stdio.h>

int main(void)
{
    int n;

    for ( ; ; )
    {
        printf("Enter a positive non-zero integer: ");
        scanf("%d", &n);

        if (n > 0)
            break;
    }

    printf("Square of %d is %d\n", n, (n * n));

    return 0;
}

