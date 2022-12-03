#include <stdio.h>
#include <math.h>

int main(void){
    float dollars = -1;
    int cents; 
    while(dollars <0 || dollars> 3.4*pow(10, 38)){
        printf("Amount: ");
        scanf("%f", &dollars);
    }

    cents = round(dollars*100);
    int hard_change[] = {25, 10, 5, 1};
    int change = 0;

    for(int i = 0; i < 4; i++){
        if(cents == 0){
            printf("%i\n", change);
            return 0;
        }
        change += (int)cents/(hard_change[i]);
        cents = cents%(hard_change[i]);
    }
    
    printf("%i\n", change);   
}