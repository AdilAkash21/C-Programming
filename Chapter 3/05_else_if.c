#include <stdio.h>

int main()
{
    int age = 91;

    if (age > 90)
    {
        printf("You are dead");
    }
    else if (age > 60)
    {
        printf("You can drive and you are a senior citizen");
    }
    else if (age > 40)
    {
        printf("You can drive and you are an adult");
    }
    else if (age > 18)
    {
        printf("You can drive");
    }
    else
    {
        printf("You are a kid and you cannot drive");
    }

    return 0;
}