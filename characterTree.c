#include <stdio.h>

/*
 *       *
 *      ***
 *     *****
 *    *******
 *       *
 */

void print_tree_char(int height, char sym){ //with any character
    int space=height-1;
    int symbol=1;
    for (int i = 1 ; i <= height ; i++){
        for(int j = 0;j < space ; j++){
            printf(" ");
        }
        for(int k = 0 ; k < symbol; k++){
            printf("%c", sym);
        }
        printf("\n");
        symbol=symbol+2;
        space--;
    }
    for (int m = 0; m < height-1; ++m) {
        printf(" ");
    }
    printf("*\n\n");
}

void print_tree(int height){ //with "*"
    int space=height-1;
    int symbol=1;
    for (int i = 1 ; i <= height ; i++){
        for(int j = 0;j < space ; j++){
            printf(" ");
        }
        for(int k = 0 ; k < symbol; k++){
            printf("*");
        }
        printf("\n");
        symbol=symbol+2;
        space--;
    }
    for (int m = 0; m < height-1; ++m) {
        printf(" ");
    }
    printf("*\n\n");
}

int main(void){
    print_tree(3); //height of tree
    print_tree(4);
    print_tree(10);
    print_tree_char(10,'+');
    print_tree_char(10,'o');
}