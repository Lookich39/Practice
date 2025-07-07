#include <stdio.h>

int check_triangle(double a, double b, double c){
    int r;
    if ((a>=(b+c)) || (b>=(a+c)) || (c>=(a+b))){
        r = 0;
    }
    else{
        r = 1;
    }
    return r;
}

int main(void){
    printf("%d", check_triangle(3, 4, 5));
    printf("\n");
    printf("%d", check_triangle(5, 10, 5));
    return 0;
}
