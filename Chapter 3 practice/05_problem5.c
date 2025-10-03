#include <stdio.h>

int main()
{
    char ch = 'Z';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97, 122
    if (ch >= 97 && ch <= 122)
    {
        printf("The character is a lowercase letter.\n", ch);
    }
    else
    {
        printf("The character is not a lowercase letter.\n", ch);
    }
    return 0;
}