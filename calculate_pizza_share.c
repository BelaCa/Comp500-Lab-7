#include <stdio.h>

int calculate_pizza_share(int number_of_people);

int main(void) {
    int input;

    printf("How many people? \n");
    scanf("%d", &input);

    // Check if the input is negative or zero
    if (input <= 0) {
        printf("Error\n");
    } else {
        printf("%d people get %d slice(s) each.\n", input, calculate_pizza_share(input));
    }

    return 0;
}

int calculate_pizza_share(int number_of_people) {
    
    return 8 / number_of_people;
}
