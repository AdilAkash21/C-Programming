#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    printf("The value of a and b is %d\n", a && b); // && is logical and operator (AND)
    printf("The value of a or b is %d\n", a || b);  // || is logical or operator (OR)
    printf("The value of not (a) is %d\n", !a);     // ! is logical not operator (NOT)

    if (a && b)
    {
        printf("both are ture\n");
    }
    // is same as writing ....
    if (a)
    {
        if (b)
        {
            printf("both are ture\n");
        }
    }
    return 0;
}