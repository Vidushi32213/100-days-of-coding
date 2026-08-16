#include <stdio.h>

int main() {
    int num;

    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);

    
    if (num >= 0) 
    {
        
        if (num == 0) 
        {
            printf("THE NUMBER IS ZERO\n");
        } else 
        {
            printf("THE NUMBER IS POSITIVE\n");
        }
    }
     else {
        
        printf("THE NUMBER IS NEGATIVE\n");
    }

    return 0;
}
