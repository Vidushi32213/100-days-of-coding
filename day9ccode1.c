#include <math.h>
#include <stdio.h>

int main(void) {
    const double EPSILON = 1e-12;
    double a, b, c;
    double discriminant;

    printf("Quadratic Equation Root Finder\n");
    printf("Equation format: ax^2 + bx + c = 0\n\n");

    printf("Enter a: ");
    if (scanf("%lf", &a) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    if (fabs(a) < EPSILON) {
        printf("Error: a cannot be 0 because the equation is not quadratic.\n");
        return 1;
    }

    printf("Enter b: ");
    if (scanf("%lf", &b) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    printf("Enter c: ");
    if (scanf("%lf", &c) != 1) {
        printf("Error: Please enter a valid number.\n");
        return 1;
    }

    discriminant = b * b - 4 * a * c;
    printf("\nDiscriminant: %.2f\n", discriminant);

    if (discriminant > EPSILON) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Category: Two distinct real roots\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    } else if (fabs(discriminant) <= EPSILON) {
        double root = -b / (2 * a);

        printf("Category: One repeated real root\n");
        printf("Root 1 = Root 2 = %.2f\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / fabs(2 * a);

        printf("Category: Two complex conjugate roots\n");
        printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }

    return 0;
}