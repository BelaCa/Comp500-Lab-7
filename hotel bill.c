#include <stdio.h>

// Function to compute the total hotel bill
float compute_bill(int num_nights, float room_rate, float mini_bar_total) {
    return (num_nights * room_rate) + mini_bar_total;
}

// Function to print the bill with conditional spacing
void print_bill(int num_nights, float room_rate, float mini_bar_total) {
    float total = compute_bill(num_nights, room_rate, mini_bar_total);
    
    // Determine if we need to add a space after the dollar sign for room rate and minibar
    char room_rate_str[10], mini_bar_total_str[10], total_str[10];
    
    sprintf(room_rate_str, "%.2f", room_rate);
    sprintf(mini_bar_total_str, "%.2f", mini_bar_total);
    sprintf(total_str, "%.2f", total);
    
    printf("Nights:    %d\n", num_nights);
    printf("Room rate: $%s%s\n", (room_rate < 100 ? " " : ""), room_rate_str);
    printf("Minibar:   $%s%s\n", (mini_bar_total < 100 ? " " : ""), mini_bar_total_str);
    printf("-----------------\n");
    printf("Total:     $%s\n", total_str);  // No space after the dollar sign for total
}

int main() {
    int num_nights;
    float room_rate, mini_bar_total;
    
    // Prompt the user for input
    printf("Number of nights? ");
    scanf("%d", &num_nights);
    printf("Room rate? ");
    scanf("%f", &room_rate);
    printf("Minibar?\n");
    scanf("%f", &mini_bar_total);
    
    // Print the bill
    print_bill(num_nights, room_rate, mini_bar_total);
    
    return 0;
}

//For example:

//Input	Result
//10
//50
//10
//Number of nights? Room rate? Minibar?
//Nights:    10
//Room rate: $ 50.00
//Minibar:   $ 10.00
//-----------------
//Total:     $510.00
