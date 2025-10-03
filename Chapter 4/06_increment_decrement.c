#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i); // prints 5

    i = i + 5; // 10
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    i += 2;                              // same as i = i + 2; // 13
    printf("The value of i is %d\n", i); // 13

    // i++ prints i first and then increments i (post-increment Operatior)
    // ++i increments i first and then prints i (post-increment Operatior)

    return 0;
}