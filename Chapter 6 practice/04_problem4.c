#include <stdio.h>

// Function that modifies the value of the variable pointed to by 'a'
void change_to_thirty_times(int *a)
{
    *a = (*a) * 30;
}

int main()
{
    int x = 45;
    printf("The value of x before function call: %d\n", x);

    // Passing the address of x to the function
    change_to_thirty_times(&x);

    printf("The value of x after function call: %d\n", x);

    return 0;
}