#include <stdio.h>

int main(void){
    int height = 0;
    while (height > 8 || height <1){
        printf("Height: ");
        scanf("%i", &height);
    }

    for(int row = 1; row <= height; row++){
        for(int ecolumn = 1; ecolumn<=(height-row); ecolumn++){
            printf(" ");
        }
        for(int fcolumn =1; fcolumn<=row; fcolumn++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}