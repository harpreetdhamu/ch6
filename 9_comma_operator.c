/*
A comma expression has the 
c om m a e x p r e s s io n exp r l , expr2
where exprl and expr2 are any two expressions. A comma expression is evaluated
in two steps: First, exprl is evaluated and its value discarded. Second, expr2 is
evaluated; its value is the value of the entire expression. Evaluating exprl should
always have a side effect; if it doesn’t, then exprl serves no purpose.
Comma Operator - Associativity - left to right
Precedence - lower than all other operators
*/

#include <stdio.h>

#define N 10

int main(void)
{
    int i, sum;
    for (sum = 0, i = 1; i < N ; i++)
        sum += i;
    
    printf("sum of series from 1 to %d is %d\n", N, sum);
    
    return 0;
    
}