#include <stdio.h>

// Function to determine if a character is a hexadecimal digit
int is_hex_digit(char ch) {
    // Check if the character is between '0' and '9' or between 'A' and 'F' (uppercase)
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'F')) {
        return 1; // Return 1 if the character is a valid hexadecimal digit
    } else if ((ch >= 'a' && ch <= 'f')) { // Check if the character is between 'a' and 'f' (lowercase)
        return 1; // Return 1 if the character is a valid hexadecimal digit
    } else {
        return 0; // Return 0 otherwise
    }
}

int main() {
    char input;

    // Prompt the user to input a character
    scanf(" %c", &input);

    // Call the is_hex_digit function with the stored character
    int result = is_hex_digit(input);

    // Print the result (1 if the character is a valid hexadecimal digit, 0 otherwise)
    printf("> %d\n", result);

    return 0;
}

//For example:

//Input	Result
//3
//> 1
