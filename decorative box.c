#include <stdio.h>

void print_top(){
    printf("/\\/\\/\\/\\/\\\n");
    
}

void print_bottom(){
    printf("\\/\\/\\/\\/\\/\n");
    
}

void print_middle(int how_many){
    for (int i = 0; i < how_many; i++) {
        printf("\\        /\n/        \\\n");
    }
    
}

int main(){
    
    int mid;
    printf("How many middle parts?\n");
    scanf("%d", &mid);
    
    print_top();
    print_middle(mid);
    print_bottom();
    return 0; 
}
