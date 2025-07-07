#include <stdio.h>
#include <locale.h>
#define MAXLEN 100

void filter_vowel(char* string, char* result) {
    int i=0, e=0;
    while(string[i]!='\0'){
        if ((string[i]!='a')&&(string[i]!='e')&&(string[i]!='i')&&(string[i]!='o')&&(string[i]!='u')){
            result[e] = string[i];
            e++;
        }
        i++;
    }
    printf("%s", result);
}

int main(void){
    setlocale(LC_ALL, "Rus");
    char s[80], res[20], r;
    puts("¬ведите строку: ");
    fgets(s,MAXLEN,stdin);
    s[strlen(s)-1] = '\0';
    filter_vowel(s, res);
    return 0;
}
