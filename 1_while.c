#include <stdio.h>

int main(void)
{
    int i = 1, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i < n)
        i = i * 2;
        printf("i = %d\n", i);

    return 0;
}