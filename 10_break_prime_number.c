/* 
Break statement
Program checks whether a number is prime or not 
*/

#include <stdio.h>

int main(void)
{
    int num, div;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (div = 2; div < num; div++)
    {
        if (num % div == 0)
            break;
    }

    if (div < num)
        printf("%d is divisible by %d\n", num, div);

    else
        printf("%d is prime\n", num);

    return 0;
}