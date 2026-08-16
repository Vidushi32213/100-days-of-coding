#include <stdlib.h>

int main(void)
{
    float p,r,t,SI,A,CI ;
          
          printf("Enter the value of principle :");
          scanf("%f",&p);
          
          printf("Enter the value of rate :");
          scanf("%f",&r);
          
          printf("Enter the value of time :");
          scanf("%f",&t);
          
          SI = (p*r*t)/100 ;
          A= p*pow(1 + r/100, t); // Amount = principal*(1 + r/100)^time
          CI= A - p;

      printf("Simple interest is :%.2f",SI);
      printf("\nCompound interest is :%.2f",CI);


    return (0);
}