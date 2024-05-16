#include <stdio.h>

// Function to find the maximum of three integers
int find_maximum(int number1, int number2, int number3) {
    int max = number1;
    
    // Compare number2 with max
    if (number2 > max) {
        max = number2;
    }
    
    // Compare number3 with max
    if (number3 > max) {
        max = number3;
    }
    
    return max;
}

int main(void)
{
    int number_1 = 0;
    int number_2 = 0;
    int number_3 = 0;

    printf("Please input the first number: \n");
    scanf("%d", &number_1);

    printf("Please input the second number: \n");
    scanf("%d", &number_2);

    printf("Please input the third number: \n");
    scanf("%d", &number_3);

    int max_result = find_maximum(number_1, number_2, number_3);
    printf("The maximum number is %d\n", max_result);

    return 0;
}

//For example:

//Input	Result
//3
//4
//7
//Please input the first number:
//Please input the second number:
//Please input the third number:
//The maximum number is 7

