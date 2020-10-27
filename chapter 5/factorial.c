#include <stdio.h>

int factorial(int n)
{
    return n>1 ? n*factorial(n-1) : 1;
}

void main(void)
{
    int n;
    printf("Enter A Number: ");
    scanf("%d",&n);
    int fac = factorial(n);
    printf("Factorial of %d is %d\n",n,fac);
}
