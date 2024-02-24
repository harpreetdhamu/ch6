#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter the value of i: ");
    scanf("%d", &i);

/*
    while (i > 0)
    {
        printf("T minus %d and counting\n", i);
        i--;
    }
*/

/* The above code can also be written as following: */
    while (i > 0)
        printf("T minus %d and counting\n", i--);
    
        

    return 0;
}