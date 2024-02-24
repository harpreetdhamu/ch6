/*
The following example, which reads a series of numbers and computes their
sum, illustrates a simple use of continue. The loop terminates when 10 nonzero
numbers have been read. Whenever the number 0 is read, the cotinue statement
is executed, skipping the rest of the loop body (the statements sum += i ;
and n++ ;) but remaining inside the loop.
*/

#include <stdio.h>

int main(void)
{
    int n = 1, sum = 0, i;

    while (n < 11)
    {
        printf("Enter %d number: ", n);
        scanf("%d", &i);
        if (n == 0)
            continue;

        sum += i;
        n++;
        // continue jumps to here 
    } 
   



// If continue were not available, we could have written the example as follows:

 /*    while (n < 11)
    {
        printf("Enter %d number: ", n);
        scanf("%d", &i);
        if (i != 0)
        {
            sum += i;
            n++;
        }
    }
 */

    printf("sum of the provided 10 numbers is %d\n", sum);

    return 0;
}