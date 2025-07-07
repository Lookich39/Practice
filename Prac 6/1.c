#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LNode {
    int   id;
    char  *word;  /* data area */

    struct LNode *prev;     /* link to previous node */
    struct LNode  *next;     /* link to next node */
};

struct LHead {
    int cnt;
    struct LNode *first;
    struct LNode *last;
};

typedef struct LHead Head;
typedef struct LNode Node;

void delete_by_text1(Head *my_head, char *keyword, int len);

int main()
{
    delete_by_text1()
    return 0;
}

void delete_by_text1(Head *my_head, char *keyword, int len)
{
    int i;
    Node *addres=(Node*)malloc(sizeof(Node));
    Node *temp=(Node*)malloc(sizeof(Node));
    addres = my_head->first;
    for(i=0;i<len;i++){
        if (strcmp(addres->word, keyword)==0){
            if (i==0){
                my_head->first=addres->next;
                my_head->cnt-=1;
            }
            else{
                addres->next->prev=addres->prev;
                addres->prev->next=addres->next;
            }
            i=len;
        }
        temp=addres->next;
        addres = temp;
    }
}