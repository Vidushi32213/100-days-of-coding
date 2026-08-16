#include <stdlib.h>


int main(void)
{
    float c,f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9/5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", c, f);

    return (0);
}