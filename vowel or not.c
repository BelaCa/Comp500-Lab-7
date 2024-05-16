#include <stdio.h>

// Function to determine if a character is a vowel
int is_vowel(char ch) {
    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1; // If the character is a vowel, return 1
    } else {
        return 0; // If the character is not a vowel, return 0
    }
}

int main() {
    char ch;
    
    
    // Retrieve and store the user's input
    scanf(" %c", &ch);
    
    // Call the is_vowel function with the stored character
    int result = is_vowel(ch);
    
    // Print the returned integer value from the function
    printf("> %d\n", result);
    
    return 0;
}

//For example:

//Input	Result
//e
//> 1
