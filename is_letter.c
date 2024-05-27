#include <stdio.h>

int is_letter(char ch);

int main(void) {
    char character;

    scanf(" %c", &character);

    int result = is_letter(character);
    printf("> %d\n", result);

    return 0;
}

int is_letter(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}
