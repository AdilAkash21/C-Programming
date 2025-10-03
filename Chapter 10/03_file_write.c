#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("akash.txt", "a");
    int num = 423;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}