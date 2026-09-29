#include <stdio.h>

int main (void) 
{
    int op1, op2;
    int res;
    
    printf("Input two integers:");
    scanf("%i %i", &op1, &op2);

    printf("%i + %i = %i\n", op1, op2, op1 + op2);
    printf("%i - %i = %i\n", op1, op2, op1 - op2);
    printf("%i * %i = %i\n", op1, op2, op1 * op2);
    printf("%i / %i = %i\n", op1, op2, op1 / op2);

    return 0;
}
