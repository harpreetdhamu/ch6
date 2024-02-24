/*
The null statement is primarily good for one thing: writing loops whose bodies
are empty. As an example, recall the prime-finding loop ofSection 6.4:
*/

#include <stdio.h>

int main(void)
{
    int d, n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (d = 2; d < n && n % d != 0; d++)
        /* empty loop body */   ;

    if (d < n)
        printf("%d is divisible ny %d\n", n, d);
    else
        printf("%d is a prime number\n", n);

    return 0;
}