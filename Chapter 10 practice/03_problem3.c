#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("akash.txt", "r");
    ptr2 = fopen("akash2.txt", "a");
    while (1)
    {
        if (ch == EOF)
        {
            break;
        }
        else
        {
            ch = fgetc(ptr);
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);    
        }
    }
    return 0;
}