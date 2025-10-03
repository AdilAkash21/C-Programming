#include<stdio.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is necessary

int main()
{
    struct employee e1;
    e1.code = 100;
    struct employee *ptr;
    ptr = &e1;

    // printf("%d\n", (*ptr).code);
    printf("%d\n", ptr->code); // Exactly same as above line
    
    return 0;
}