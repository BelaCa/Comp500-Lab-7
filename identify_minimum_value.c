#include <stdio.h>

// Function to identify the minimum value between two integers
int identify_minimum_value(int num1, int num2) {
    return (num1 < num2) ? num1 : num2;
}

int main() {
    int num1, num2, minimum_value;

    // Request user input for two integers
    printf("Please input number 1:\n");
    scanf("%d", &num1);

    printf("Please input number 2:\n");
    scanf("%d", &num2);

    // Call the function to identify the minimum value
    minimum_value = identify_minimum_value(num1, num2);

    // Display the minimum value to the user
    printf("The minimum number of %d and %d is %d\n", num1, num2, minimum_value);

    return 0;
}
