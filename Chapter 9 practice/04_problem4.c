#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary; // imaginary is maked by %di
} Complex;

int main()
{
    Complex c = {3, 4};
    printf("The value of Complex number is %d + %di \n", c.real, c.imaginary);

    return 0;
}