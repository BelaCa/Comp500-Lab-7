#include <stdio.h>

char to_lowercase(char letter);

int main(void)
{
	char input;

	printf("Please input a letter: \n");

	scanf("%c", &input);

	printf("%c's lowercase is %c\n", input, to_lowercase(input));

	return 0;
}

char to_lowercase(char letter)
{
    // Check if the character is an uppercase letter
    if (letter >= 'A' && letter <= 'Z') {
        // Convert the uppercase letter to lowercase
        return letter + ('a' - 'A');
    } else {
        // Return the character unchanged if it's not an uppercase letter
        return '\x00';
    }
}
