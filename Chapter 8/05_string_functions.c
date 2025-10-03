#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "AKASH";
    char s1[56] = "ADIL";
    char s2[56] = "SAKIL";

    // printf("%d", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "AKASH"
    printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "helloAKASH" <space in between>
    // printf("%s", s1);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}