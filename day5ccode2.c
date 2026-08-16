#include <stdlib.h>

int main(void)
{
    int ts , s , m , h ;
    
    printf("Enter total seconds :");
    scanf("%d", &ts);

    h = ts / 3600 ;
    m = (ts % 3600)/60 ;
    s = ts % 60 ;

    printf("%d hours %d minutes %d seconds", h,m,s);

    return (0);
}