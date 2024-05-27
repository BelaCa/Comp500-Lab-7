#include <stdio.h>

// Function prototype
void print_assessments(int learning_outcome);

// Function definition
void print_assessments(int learning_outcome) {
    // Check if the learning outcome number is within the valid range
    if (learning_outcome < 1 || learning_outcome > 10) {
        printf("Invalid Learning Outcome.\n");
        return;
    }

    // Print assessments covering the learning outcome based on the table
    if (learning_outcome <= 10) {
        printf("\nReporting Journal\n");
    }
    if (learning_outcome <= 6) {
        printf("Practical Test 1\n");
    }
    if (learning_outcome <= 8) {
        printf("Practical Test 2\n");
    }
    if (learning_outcome <= 9) {
        printf("Practical Test 3\n");
    }
    if (learning_outcome <= 10) {
        printf("Final Practical Exam\n");
    }
}

int main() {
    int learning_outcome;

    // Prompt the user to input the learning outcome number
    printf("Learning Outcome? \n");
    scanf("%d", &learning_outcome);

    // Call the function to print assessments covering the learning outcome
    print_assessments(learning_outcome);

    return 0;
}


//For example:

//Input	Result
//0
//Learning Outcome?
//Invalid Learning Outcome.
