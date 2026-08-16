#include <stdlib.h>


int main(void)
{
    int a , b , add , sub ,  multiply , divide ;

    printf(" enter 1st number :");
    scanf("%d", &a);

    printf(" enter second number :");
    scanf("%d", &b);

    add= a+b;
    sub= a-b;
    multiply= a*b;
    divide= a/b;

    printf("sum = %d", add);
    printf("\nDiff = %d", sub);
    printf("\nProduct = %d", multiply);
    printf("\nQuotient = %d", divide);
    return (0);
}