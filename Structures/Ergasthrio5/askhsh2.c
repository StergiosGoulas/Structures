#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10

int queue[N];
int ip, rp;

void qinsert(int);
int qremove();

int main(){
    char ch;
    int ak;
    char inp[20];

    printf("Dwse xarakthra: ");
    gets(&ch);
    while(ch != 'E'){
        switch(ch){
            case 'U':
                printf("Dwse enan int gia na mpei sthn oura: ");
                gets(inp);
                ak = atoi(inp);
                qinsert(ak);
                break;
            case 'O':
                ak = qremove();
                if(ak != -1)
                    printf("%d\n", ak);
                break;
            default:
                printf("Lathos xarakthras\n");
        }
        fflush(stdin);
        printf("Dwse neo xarakthra: ");
        gets(&ch);
    }
    while(ip != rp){
        ak = qremove();
        printf("%5d", ak);
    }
    printf("\n");
}

void qinsert(int ak){
    if(ip == N){
        printf("H oura einai gemath\n");
        return;
    }else
        queue[ip++] = ak;
}

int qremove(){
    if(ip == rp){
        ip = 0;
        rp = 0;
        printf("H oura einai adeia\n");
        return -1;
    }else
        return queue[rp++];
}