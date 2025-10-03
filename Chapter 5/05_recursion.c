#include <stdio.h>

int factorial(int);

// Factorial(5) = 1 x 2 x 3 x 4 x 5
// Factorial(4) = 1 x 2 x 3 x 4
// Factorial(3) = 1 x 2 x 3
// Factorial(n) = 1 x 2 x 3 x ... x n-1 x n
// = 1 x 2 x 3 x ... x n-1

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // Factorial(n) = Factorial(n-1) x n
    return factorial(n - 1) * n;
}
int main()
{
    int a = 7;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}

