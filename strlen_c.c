#include <stdio.h>

// strlen_c counts the number of characters in a C string
int strlen_c(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        i++;
    }

    return i;
}
