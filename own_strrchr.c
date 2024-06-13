//The strrchr function in C searches for the last occurrence of a character in a string.
#include <stdio.h>
#include<string.h>

char *my_strrchr(const char *str, int c);

int main() {
    const char *str = "Hello, world!";
    char ch = 'o';

    char *result = my_strrchr(str, ch);

    if (result != NULL) {
        printf("Last occurrence of '%c': %s\n", ch, result);
    } else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}

char *my_strrchr(const char *str, int c)
{
    char *last_occurrence = NULL;

    // Iterate over the string using array indexing
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == (char)c) {
            last_occurrence = (char *)&str[i];
        }
    }

    // Check the terminating null byte
    if (c == '\0') {
        return (char *)&str[strlen(str)];
    }

    return last_occurrence;
}

