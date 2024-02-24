/* The goto statement is also useful for exiting from nested loops */

#include <stdio.h>

int main(void)
{
    for (int i = 1 ; i <= 10 ; i++)
        for (int j = 1; j <= i; j++)
        {
         
            if ( i + j == 10)
            {
                goto done;
            }
            else
                printf("%d\n", i + j);
        }
    done:
        printf("stop\n");

    return 0;
}