#include <stdio.h>

char *my_strchr(const char *str, int c) {
    // Iterate through the string
    while (*str != '\0') {
        if (*str == (char)c) {
            // Return a pointer to the first occurrence of the character
            return (char *)str;
        }
        str++;
    }
    // Check if the character to find is the null character
    if (c == '\0') {
        return (char *)str;
    }
    // Return NULL if the character is not found
    return NULL;
}

int main() {
    const char *string = "Hello, world!";
    char target = 'o';
    char *result = my_strchr(string, target);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", target, result - string);
    } else {
        printf("Character '%c' not found\n", target);
    }

    return 0;
}

