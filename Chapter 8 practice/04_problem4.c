#include <stdio.h>
#include <string.h>

char* slice(char str[], int m, int n) {
    static char result[100];  // static so it persists after return
    int i, j = 0;

    for (i = m; i < n && str[i] != '\0'; i++) {
        result[j++] = str[i];
    }
    result[j] = '\0';  // null terminate

    return result;
}

int main() {
    char str[] = "Akash";

    // start from 0 instead of 1
    printf("%s\n", slice(str, 0, 5));  // prints "Akash"

    return 0;
}