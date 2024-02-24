/* Write a program that calculates the number of digits in an integer entered by the user: 
Enter a nonnegative integer: 60
The number has 2 digit(s).
*/

#include <stdio.h>

int main(void)
{
    int number, digits;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &number);

    digits = 0;
    // do statement will surely execute atleast once, even if the expression is false
    do
    {
        digits++;
        number /= 10;
    } while (number > 0);

    // while (number)
    // {
    //     digits++;
    //     number /= 10;
    // }
    

    printf("The number has %d digit(s).\n", digits);

    return 0;
    
}