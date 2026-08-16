#include <stdlib.h>


int main(void)
{
        int num1, num2;

    printf("Enter first value :");
    scanf("%d", &num1);
    printf("Enter second value :");
    scanf("%d", &num2);

    int temp = num1;
    num1=num2;
    num2= temp;

    printf("After swapping a = %d and b = %d\n", num1, num2);

    return (0);
}