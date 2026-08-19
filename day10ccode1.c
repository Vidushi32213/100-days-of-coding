#include <stdio.h>

int main(void) {
    double a, b, c;

    printf("Enter the three side lengths: ");

    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    /* Check for positive lengths and the triangle inequality. */
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("These side lengths do not form a valid triangle.\n");
    } else if (a == b && b == c) {
        printf("Equilateral triangle\n");
    } else if (a == b || a == c || b == c) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }

    return 0;
}