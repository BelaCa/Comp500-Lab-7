#include <stdio.h>

int is_positive(int number);
int is_negative(int number);
int is_zero(int number);

int main() {
    int input = 0;

    printf("> \n");
    scanf("%d", &input);

    printf("Calling is_positive: %d\n", is_positive(input));
    printf("Calling is_negative: %d\n", is_negative(input));
    printf("Calling is_zero: %d\n", is_zero(input));

    return 0;
}

int is_positive(int number) {
    return (number > 0) ? 1 : 0;
}

int is_negative(int number) {
    return (number < 0) ? 1 : 0;
}

int is_zero(int number) {
    return (number == 0) ? 1 : 0;
}
