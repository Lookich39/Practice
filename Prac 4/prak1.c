#include <stdio.h>
#include <locale.h>
#define MAXLEN 100

int substring_count(char* string, char* substring) {
    int flag, count=0;
    for(int i=0; string[i]!='\0'; i++){
        flag = 1;
        int j=0;
        while((substring[j]!='\0') && (flag==1)){
            if (string[i+j] != substring[j]){
                flag = 0;
            }
            j++;
        }
        if (flag == 1){
            count++;
        }
    }
    return count;
}

int main(void){
    setlocale(LC_ALL, "Rus");
    char s[80], r[15];
    puts("������� ������: ");
    fgets(s,MAXLEN,stdin);

    puts("������� �����: ");
    fgets(r,MAXLEN,stdin);
    s[strlen(s)-1] = '\0';
    r[strlen(r)-2] = '\0';
    printf("%d", substring_count(s, r));
    return 0;
}
