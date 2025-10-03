#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest of all is %d\n", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The greatest of all is %d\n", d);
    }
    return 0;
}