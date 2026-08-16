#include<stdio.h>

int main(){

    float radius;
    
    
    printf("Enter radius: ");
    scanf("%f",&radius);

    float pi= 3.1415 ;
    float area= pi*radius*radius ;
    float circumference = pi*2*radius;

    printf("The area of circle is: %.2f\n", area);
    printf("Circumeference of circle is %.f", circumference);

    return 0;
}