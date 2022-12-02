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

    int _25 = 25, _10 = 10, _5 = 5, _1 = 1;
    int change = 0;
    
    if(cents == 0){
        printf("0");
        return 0;
    }
    else{
        change += (int)(cents/_25);
        cents = cents%(_25);
    }

    if(cents == 0){
        printf("%i\n", change);
        return 0;
    }
    else{
        change += (int)(cents/_10);
        cents = cents%(_10);
    }

    if(cents == 0){
        printf("%i\n", change);
        return 0;
    }
    else{
        change += (int)(cents/_5);
        cents = cents%(_5);
    }

    if(cents == 0){
        printf("%i\n", change);
        return 0;
    }
    else{
        change += (int)(cents/_1);
        cents = cents%(_1);
    }

    printf("%i\n", change);   
}