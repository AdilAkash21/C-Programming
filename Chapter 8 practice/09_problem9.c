#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'a';
    int contains = 0;
    char str[] = "akash";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if (contains){
    printf("Yes it contains\n");
    }
    else{
        printf("No it does not contain\n");
    
    }

    
    printf("%d", contains);

    return 0;
}