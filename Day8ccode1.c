##include <stdio.h>

int main(void)
{
    char ch;

    printf("Enter a character: ");

    if (scanf(" %c", &ch) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }

    return 0;
}