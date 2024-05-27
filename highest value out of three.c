#include <stdio.h>

int find_maximum(int number1, int number2, int number3);

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

int find_maximum(int number1, int number2, int number3)
{
 if (number1 >= number2 && number1 >= number3) {
        return number1;
    } else if (number2 >= number1 && number2 >= number3) {
        return number2;
    } else {
        return number3;
    }
}
