#include <stdio.h>
#include <locale.h>
#define MAXLEN 100

int word_count(char* string){
    int count=0;
    char f, l;
    f = string[0];
    for(int i=0; string[i-1]!='\0'; i++){
        if (string[i] == '\0'){
            l = string[i-1];
            if (f == l){
                count++;
            }
        }
        else if (string[i] == " "){
            l = string[i-1];
            if (f == l){
                count++;
            }
            f = string[i+1];
        }
    }
    return count;
}

int main(void){
    setlocale(LC_ALL, "Rus");
    char s[80];
    puts("¬ведите строку: ");
    fgets(s,MAXLEN,stdin);
    s[strlen(s)-1] = '\0';
    printf("%d", word_count(s));
    return 0;
}
