#include <stdio.h>

// Function to convert a lowercase character to uppercase
char to_upper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    } else {
        return '\0';
    }
}

int main() {
    char input_char, result;

    // Prompt the user to input a character
    printf("Please enter a letter: ");
    scanf("%c", &input_char);

    // Convert the input character to uppercase
    result = to_upper(input_char);

    // Display the result
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("\\x00\n");
    }

    return 0;
}

//For example:

//Input	Result
//d
//Please enter a letter: D
