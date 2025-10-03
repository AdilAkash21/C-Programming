#include <stdio.h>

int main()
{
    int a = 6;
    int b = 3;
    int c = a + b; // Addition
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    
    // Modulas operator is used to get the remainder

    printf("The remainder when a is divided by b is: %d", a%b);
    // This does not work for exponentiation in c
    // int d = a^b; // Exponentiation

    return 0;
}