#include <stdio.h>

int is_digit(char c);

int main() {
    char input;
    
    printf("> ");
    scanf("%c", &input);
    
    printf("%d\n", is_digit(input));

    return 0;
}

int is_digit(char c) {
    // Check if the character is between '0' and '9'
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}
