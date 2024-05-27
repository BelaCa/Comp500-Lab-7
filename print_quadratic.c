#include <stdio.h>

// Function to print the quadratic equation in standard form
void print_quadratic(int a, int b, int c) {
    printf("%dx^2 ", a); // Print the coefficient of x^2
    if (b >= 0) {
        printf("+ "); // Print "+" if b is positive
    } else {
        printf("- "); // Print "-" if b is negative
    }
    printf("%dx ", (b >= 0) ? b : -b); // Print the absolute value of the coefficient of x
    if (c >= 0) {
        printf("+ "); // Print "+" if c is positive
    } else {
        printf("- "); // Print "-" if c is negative
    }
    printf("%d\n", (c >= 0) ? c : -c); // Print the absolute value of the constant term
}

int main() {
    int a, b, c;
    
    // Prompt the user to enter coefficients
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);
    
    // Print the quadratic equation in standard form
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
