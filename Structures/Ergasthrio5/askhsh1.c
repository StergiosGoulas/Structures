#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10

void push(int);
int pop();

int stak[N];
int sp;

int main(){
    char ch;
    int ak;
    char inp[20];

    printf("Dwse xarakthra: ");
    // ch = getc(stdin);
    gets(&ch);

    while(ch != 'E'){
        switch(ch){
            case 'U':
                printf("Dwse int gia na mpei sto stack: ");
                gets(inp);
                ak = atoi(inp);
                push(ak);
                break;
            case 'O':
                ak = pop();
                if(ak != -1)
                    printf("%d\n", ak);
                break;
            default:
                printf("Lathos xarakthras\n");
        }
        fflush(stdin);
        printf("Dwse neo xarakthra: ");
        // ch = getc(stdin);
        gets(&ch);
    }
    while(sp != 0){
        ak = pop();
        printf("%5d", ak);
    }
    printf("\n");
    return 1;
}

void push(int ak){
    if(sp == N){
        printf("To stack einai gemato\n");
        return;
    }else
        stak[sp++] = ak;
}

int pop(){
    if(sp == 0){
        printf("To stack einai adeio\n");
        return -1;
    }else
        return stak[--sp];
}