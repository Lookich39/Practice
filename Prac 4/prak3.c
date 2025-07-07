#include <stdio.h>
#include <locale.h>
#define MAXLEN 100

void get_words_starting_with(char* string, char* result, char letter){
    int i=0, j, s=0, ln=0, e=0;
    while(string[i]!='\0'){
        if (string[i]==' '){
            s = i-ln;
            if (string[s] == letter){
                j = s;
                for(j=s; j<s+ln+1; j++){
                    result[e] = string[j];
                    e++;
                    result[e] = ' ';
                }
            }
            ln = -1;
        }
        i++;
        ln++;
    }
    s = i-ln;
    if (string[s] == letter){
        j = s;
        for(j=s; j<s+ln+1; j++){
            result[e] = string[j];
            e++;
            result[e] = ' ';
        }
    }
}

int main(void){
    setlocale(LC_ALL, "Rus");
    char s[80], res[20], r;
    puts("¬ведите строку: ");
    fgets(s,MAXLEN,stdin);
    puts("¬ведите букву: ");
    r = getchar();
    s[strlen(s)-1] = '\0';
    get_words_starting_with(s, res, r);
    return 0;
}
