#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 3.352;
    ptr[1] = 6.352;
    ptr[2] = 7.352;
    ptr[3] = 8.352;
    ptr[4] = 9.352;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);

    return 0;
}