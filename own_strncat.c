// strncat function in C involves appending a specified number of characters from one string to another. The strncat function appends up to n characters from the source string to the destination string, and then adds a null terminator.

#include <stdio.h>

char *my_strncat(char *dest, const char *src, size_t n) {
    char *dest_start = dest;

    // Move to the end of the destination string
    while (*dest != '\0') {
        dest++;
    }

    // Append up to n characters from src to dest
    while (n-- > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Null-terminate the result
    *dest = '\0';

    return dest_start;
}

int main() {
    char dest[50] = "Hello";
    const char *src = " world!";
    size_t n = 4;

    printf("Before my_strncat: %s\n", dest);
    my_strncat(dest, src, n);
    printf("After my_strncat: %s\n", dest);

    return 0;
}

