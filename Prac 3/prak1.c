#include <stdio.h>

int my_round(float a){
    int b;
    b = roundf(a);
    return b;
}

int main(void){
    int a=32.45, b=35.5;
    printf("%d", my_round(a));
    printf("%d", my_round(b));
    return 0;
}
