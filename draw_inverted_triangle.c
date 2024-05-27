#include <stdio.h>

void draw_inverted_triangle(int height);

int main() {
    int height;
    printf("enter height:\n");
    scanf("%d", &height);
    draw_inverted_triangle(height);
    return 0;
}

void draw_inverted_triangle(int height) {
    if (height <= 0) {
        printf("\n");
        return;
    }

    for (int i = 0; i < 2 * height; i++) {
        printf("_");
    }
    printf("\n");

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("\\");

        for (int j = 0; j < 2 * (height - i - 1); j++) {
            printf(" ");
        }

        printf("/\n");
    }
}

//For example:

//Input	Result
//3
//enter height:
//______
//\    /
// \  /
//  \/
