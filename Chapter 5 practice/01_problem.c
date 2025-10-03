#include <stdio.h>
float avarage(int a, int b, int c);

float avarage(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a = 3;
    int b = 6;
    int c = 5;
    printf("The avarage of a,b and c is %f\n", avarage(a, b, c));

    return 0;
}