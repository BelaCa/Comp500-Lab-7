#include <stdio.h>

void print_equal(int a, int b) {
    if (a == b) {
        printf("Equal [%d vs %d]\n", a, b);
    } else {
        printf("Not Equal [%d vs %d]\n", a, b);
    }
}

void print_largest(int a, int b) {
    if (a >= b) {
        printf("%d is largest [%d vs %d]\n", a, a, b);
    } else {
        printf("%d is largest [%d vs %d]\n", b, a, b);
    }
}

void print_smallest(int a, int b) {
    if (a <= b) {
        printf("%d is smallest [%d vs %d]\n", a, a, b);
    } else {
        printf("%d is smallest [%d vs %d]\n", b, a, b);
    }
}

int main(void) {
    int first_number, second_number;

    printf("Please enter the first number: \n");
    scanf("%d", &first_number);

    printf("Please enter the second number: \n");
    scanf("%d", &second_number);

    print_equal(first_number, second_number);
    print_largest(first_number, second_number);
    print_smallest(first_number, second_number);

    return 0;
}
