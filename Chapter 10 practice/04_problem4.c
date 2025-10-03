#include <stdio.h>

int main()
{
    FILE *ptr;
    int name1[34], name2[34];
    int salary1, salary2;
    ptr = fopen("salary.txt", "w");

    // For first employee
    printf("Enter the name of Employee \n");
    scanf("%s", name1);

    printf("Enter the salary of Employee \n");
    scanf("%d", &salary1);

    // For second employee

    printf("Enter the name of Employee 2\n");
    scanf("%s", name2);

    printf("Enter the salary of Employee 2\n");
    scanf("%d", &salary2);

    // For first employee

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", " ,");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');
   
    // For second employee

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", " ,");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');

    return 0;
}