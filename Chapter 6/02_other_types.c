#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i (j is a charactor pointer)
    float k = 5.67;
    float *k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &k);

    printf("The value at address j is %ed\n", *(&i));

    return 0;
}