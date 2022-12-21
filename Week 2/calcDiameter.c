#include<stdio.h>

void calc(float *n);

int main()
{
    float number;
    printf("%s", "Enter a diameter: ");
    scanf("%f", &number);
    
    calc(&number);
    printf("%s", "\n De omtrek is: ");
    printf("%f", number);
}

void calc(float* n)
{
    float number = *n;
    *n = number * 3.1415;
}