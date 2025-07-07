#include <stdio.h>
int main(void)
{
    puts("Hello");
    int input, last=0;
    scanf("%d", &input);
    input = input / 10;
    last = input % 10;
    printf("%d", last);
    return 0;
}
