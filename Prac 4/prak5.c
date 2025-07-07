#include <stdio.h>
#include <locale.h>
#define MAXLEN 100

void filter_words_longer_than(char* string, char* result, int n) {
    int i=0, j, s=0, ln=0, e=0;
    while(string[i]!='\0'){
        if (string[i]==' '){
            s = i-ln;
            if (ln <= n){
                for(j=s; j<s+ln+1; j++){
                    result[e] = string[j];
                    e++;
                }
            }
            ln = -1;
        }
        i++;
        ln++;
    }
    s = i-ln;
    if (ln <= n){
        for(j=s; j<s+ln+1; j++){
            result[e] = string[j];
            e++;
        }
    }
    printf("%s", result);
}

int main(void){
    setlocale(LC_ALL, "Rus");
    char s[80], res[20];
    int n;
    puts("¬ведите строку: ");
    fgets(s,MAXLEN,stdin);
    puts("¬ведите букву: ");
    scanf("%d", &n);
    s[strlen(s)-1] = '\0';
    filter_words_longer_than(s, res, n);
    return 0;
}
