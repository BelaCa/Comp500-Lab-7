#include <stdio.h>

void print_nozzle(int height);
void print_body(int height, int width);
void print_logo(int width);

int main() {
    int body_height, body_width;

    printf("Rocket body width (minimum 6)?\n");
    scanf("%d", &body_width);
    printf("Rocket body height?\n");
    scanf("%d", &body_height);

    int nozzle_height = body_width / 2;

    print_nozzle(nozzle_height);
    print_body(body_height, body_width);
    print_logo(body_width);
    print_body(body_height, body_width);
    print_nozzle(nozzle_height);

    return 0;
}

void print_nozzle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int k = 0; k < 1; k++) {
            printf(" ");
        }

        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        printf("/");

        for (int j = 0; j < 2 * i - 2; j++) {
            printf(" ");
        }
        printf("\\\n");
    }
}

void print_body(int height, int width) {
    printf("+");
    for (int i = 0; i < width; i++) {
        printf("-");
    }
    printf("+\n");
    
    for (int i = 0; i < height; i++) {
        printf("|");
        for (int j = 0; j < width; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    printf("+");
    for (int i = 0; i < width; i++) {
        printf("-");
    }
    printf("+\n");
}

void print_logo(int width) {
    int left_space, right_space;


    left_space = (width / 2) - 2;
    right_space = width - left_space - 1;  
    printf("|");
    for (int i = 0; i < left_space; i++) {
        printf(" ");
    }
    printf("N");
    for (int i = 0; i < right_space; i++) {
        printf(" ");
    }
    printf("|\n");
    

    printf("|");
    left_space = width - left_space - 1;  
    right_space = (width / 2) - 3;
    for (int i = 0; i < left_space; i++) {
        printf(" ");
    }
    printf("Z");
    for (int i = 0; i < right_space; i++) {
        printf(" ");
    }
    printf(" |\n");
    
    printf("|");
     left_space = (width - 6) / 2;
    right_space = width - 6 - left_space;
   
    for (int i = 0; i < left_space; i++) {
        printf(" ");
    }
    printf("Rocket");
    for (int i = 0; i < right_space; i++) {
        printf(" ");
    }
    printf("|\n");
}
