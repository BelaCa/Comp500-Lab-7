#include <stdio.h>

void draw_horizontal_border(char horizontal_char, char corner_char, int width) {
    printf("%c", corner_char);
    for (int i = 0; i < width - 2; ++i){
        printf("%c", horizontal_char);
    }
    printf("%c\n", corner_char); 
}

void draw_vertical_sides(char vertical_char, int width, int height) {
    for (int i = 0; i < height - 2; ++i){
        printf("%c", vertical_char);
        for (int j = 0; j < width - 2; ++j){
            printf(" "); 
        }
        printf("%c\n", vertical_char); 
    }
}

void draw_ascii_box(char horizontal_char, char vertical_char, char corner_char, int width, int height){
    draw_horizontal_border(horizontal_char, corner_char, width);
    
    draw_vertical_sides(vertical_char, width, height);
    
    draw_horizontal_border(horizontal_char, corner_char, width);
}

int main(){
    char horizontal_char, vertical_char, corner_char;
    int width, height;
    
    scanf(" %c", &horizontal_char);
    scanf(" %c", &vertical_char);
    scanf(" %c", &corner_char);
    scanf("%d", &width);
    scanf("%d", &height);
    
    draw_ascii_box(horizontal_char, vertical_char, corner_char, width, height);
    
    return 0;
}
