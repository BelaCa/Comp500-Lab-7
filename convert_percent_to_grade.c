#include <stdio.h>

// Function to convert percentage to grade
char convert_percent_to_grade(float percentage) {
    if (percentage >= 80.0) {
        return 'A';
    } else if (percentage >= 65.0) {
        return 'B';
    } else if (percentage >= 50.0) {
        return 'C';
    } else {
        return 'D';
    }
}

int main() {
    float percentage;
    
    // Prompt the user to input a percentage value
    printf("What's the percentage:\n");
    scanf("%f", &percentage);
    
    // Convert the percentage to grade
    char grade = convert_percent_to_grade(percentage);
    
    // Print the corresponding letter grade
    printf("%.2f%% is %c Grade\n", percentage, grade);
    
    return 0;
}

//For example:

//Input	Result
//55
//What's the percentage:
//55.00% is C Grade
