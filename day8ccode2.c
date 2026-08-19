#include <stdio.h>

int main(void) {
    double first, second, third, largest;

    printf("Enter three numbers: ");

    if (scanf("%lf %lf %lf", &first, &second, &third) != 3) {
        printf("Invalid input. Please enter three numbers.\n");
        return 1;
    }

    if (first >= second && first >= third) {
        largest = first;
    } else if (second >= first && second >= third) {
        largest = second;
    } else {
        largest = third;
    }

    printf("The largest number is: %g\n", largest);

    return 0;
}