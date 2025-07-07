#include <stdio.h>
#include <locale.h>
#define MAXLEN 100

int word_count(char* string){
    int count=0, a=0, i=0;
    while(string[i]!='\0'){
        if ((string[i]==' ') || (string[i]==' ')){
            if (string[a] == string[i-1]){
                count++;
            }
            a=i+1;
        }
        i++;
    }
    if (string[i-1] == string[a]){
        count++;
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
