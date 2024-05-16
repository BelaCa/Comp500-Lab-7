#include <stdio.h>

// Function to calculate the number of pizza slices each participant receives
int calculate_pizza_share(int number_of_people) {
    int total_slices = 8; // Total slices in a pizza
    return total_slices / number_of_people;
}

int main() {
    int number_of_people;
    
    // Display message to ask the user for input
    printf("How many people? \n");
    
    // Capture user input
    if (scanf("%d", &number_of_people) != 1 || number_of_people <= 0) {
        // If input is not a valid integer or is less than or equal to 0
        printf("Error\n");
        return 1; // Return non-zero exit status to indicate error
    }
    
    // Calculate pizza share
    int slices_per_person = calculate_pizza_share(number_of_people);
    
    // Present the result
    printf("%d people get %d slice(s) each.\n", number_of_people, slices_per_person);
    
    return 0;
}


//For example:

//Input	Result
//2
//How many people?
//2 people get 4 slice(s) each.

