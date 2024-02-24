/* Prints the sum of a series of integers entered by the user using a while statement */

#include <stdio.h>

int main(void)
{
    int number, total = 0;

    printf("This program sums a series of integers.\n");

    printf("Enter integers ( 0 to terminate): ");

    scanf("%d", &number);
    while (number != 0)
    {
        total += number;
        scanf("%d", &number);
            
    }

    printf("The sum is: %d\n", total);

    return 0;
    
}