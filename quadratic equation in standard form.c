#include <stdio.h>

// Function to print the quadratic equation in standard form
void print_quadratic(int a, int b, int c) {
    // Print the quadratic equation in standard form
    printf("%dx^2 ", a);
    
    // Print the coefficient of x with appropriate sign
    if (b >= 0) {
        printf("+ %dx ", b);
    } else {
        printf("- %dx ", -b);
    }
    
    // Print the constant term with appropriate sign
    if (c >= 0) {
        printf("+ %d", c);
    } else {
        printf("- %d", -c);
    }
    printf("\n");
}

int main() {
    int a, b, c;
    
    // Prompt the user to input coefficients
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);
    
    // Call the print_quadratic function with the input coefficients
    print_quadratic(a, b, c);
    
    return 0;
}

//For example:

//Input	Result
//3
//5
//7
//Enter a:
//Enter b:
//Enter c:
//3x^2 + 5x + 7

