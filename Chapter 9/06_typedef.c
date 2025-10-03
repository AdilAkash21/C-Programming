 #include<stdio.h>
#include<string.h>
 
 typedef struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp; // semicolon is necessary

 int main()
 {
    // typedef int Akash;
    // Akash a = 69;
    // printf("The value of Akash is %d\n", a);

    Emp e1;
    Emp* ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "Akash");
    e1.salary = 54.44;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);
      
    return 0;
 }