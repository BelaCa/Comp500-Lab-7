#include <stdio.h>

// Declare compute_bill
float compute_bill(float starter_price, float main_price, float dessert_price);

// Declare print_bill
void print_bill(float starter_price, float main_price, float dessert_price);

int main(void)
{
    float starter_price = 0.0f;
    float main_price = 0.0f;
    float dessert_price = 0.0f;

    printf("Starter price? ");
    scanf("%f", &starter_price);

    printf("Main price? ");
    scanf("%f", &main_price);

    printf("Dessert price? ");
    scanf("%f", &dessert_price);

    printf("\n");

    // Call print_bill
    print_bill(starter_price, main_price, dessert_price);

    return 0;
}

// Define compute_bill
float compute_bill(float starter_price, float main_price, float dessert_price)
{
    return starter_price + main_price + dessert_price;
}

// Define print_bill
void print_bill(float starter_price, float main_price, float dessert_price)
{
    // Call compute_bill to get the total
    float total = compute_bill(starter_price, main_price, dessert_price);
    
    // Display the prices in the specified format
    printf("Starter: $%.2f\n", starter_price);
    printf("Main:    $%.2f\n", main_price);
    printf("Dessert: $%.2f\n", dessert_price);
    printf("---------------\n");
    printf("Total:   $%.2f\n", total);
}
