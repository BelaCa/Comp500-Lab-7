#include <stdio.h>

// Function to display an ASCII rectangle
void print_ascii_rectangle(char symbol, int width, int height) {
    // Nested loops to iterate over rows and columns
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", symbol); // Print the symbol for each column
        }
        printf("\n"); // Move to the next row after printing all columns
    }
}

int main() {
    char symbol;
    int width, height;
    
    // Prompt the user for an ASCII symbol
    printf("Please enter an ASCII symbol:\n");
    scanf(" %c", &symbol);
    
    // Request the width of the rectangle
    printf("Please enter the width:\n");
    scanf("%d", &width);
    
    // Request the height of the rectangle
    printf("Please enter the height:\n");
    scanf("%d", &height);
    
    // Display the rectangle using the provided parameters
    print_ascii_rectangle(symbol, width, height);
    
    return 0;
}


//For example:

//Input	Result
//#
//3
//2
//Please enter an ASCII symbol:
//Please enter the width:
//Please enter the height:
//###
//###
