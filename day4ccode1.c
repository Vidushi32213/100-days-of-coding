#include <stdlib.h>


int main(void)
{
    int a ,b ;
    printf("Enter first number :");
    scanf("%d", &a);

    printf("Enter second number :");
    scanf("%d", &b);

    // Arithmetic operations to swap values
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);

    return (0);
}