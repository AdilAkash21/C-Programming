#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is necessary
int main()
{
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee Akash = {100, 71.22, "Akash"};
    printf("%d %f %s", Akash.code, Akash.salary, Akash.name);
    return 0;
}