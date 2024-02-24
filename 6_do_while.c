/* Rewrite the contdown example of section 6.1, using a do statement */

#include <stdio.h>

int main(void)
{
    int i;

    i = 10;
    do
    {
        printf("T minus %d and counting\n", i--);
    } while (i > 0);

    return 0;
}