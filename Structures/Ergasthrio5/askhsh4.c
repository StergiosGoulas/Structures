#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 10

struct insert
{
    char name[50];
    int num;
};


struct insert queueOne[N];
struct insert queueTwo[N];
struct insert queueThree[N];
int ipOne, rpOne;
int ipTwo, rpTwo;
int ipThree, rpThree;

void qinsert(struct insert);
struct insert qremove();

int main(){
    char ch;
    struct insert in;
    char inp[10];
    struct insert ak;

    printf("Dwse xarakthra: ");
    gets(&ch);

    while(1){
        switch(ch){
            case 'P':
                printf("Dwse to onoma: ");
                gets(in.name);
                printf("Dwse bathmo proteraiothtas: ");
                gets(inp);
                in.num = atoi(inp);
                qinsert(in);
                break;
            case 'R':
                ak = qremove();
                if(ak.num != -1)
                    printf("%s\n%5d\n", ak.name, ak.num);
                break;
            case 'E':
                while(1){
                    ak = qremove();
                    if(ak.num != -1)
                        printf("%s\n%5d\n", ak.name, ak.num);
                    else
                        break;                
                }
        }

        if(ak.num == -1){
            break;
        }else{
            fflush(stdin);
            printf("\nDwse neo xarakthra: ");
            gets(&ch);
        }
    }
}

void qinsert(struct insert in){
    if(in.num == 1){
        if(ipOne == N){
            printf("H oura einai gemath\n");
            return;
        }else
            queueOne[ipOne++] = in;
    }else if (in.num == 2){
        if(ipTwo == N){
            printf("H oura einai gemath\n");
            return;
        }else
            queueTwo[ipTwo++] = in;
    }else
        if(ipThree == N){
            printf("H oura einai gemath\n");
            return;
        }else
            queueThree[ipThree++] = in;
}

struct insert qremove(){
    struct insert ak;
    ak.num = -1;

    if(ipThree == rpThree){
        ipThree = 0;
        rpThree = 0;
        printf("H oura 3 einai adeia\n");
    }else
        return queueThree[rpThree++];

    if(ipTwo == rpTwo){
        ipTwo = 0;
        rpTwo = 0;
        printf("H oura 2 einai adeia\n");
    }else
        return queueTwo[rpTwo++];

    if(ipOne == rpOne){
        ipOne = 0;
        rpOne = 0;
        printf("H oura 1 einai adeia\n");
    }else
        return queueOne[rpOne++];

    return ak;
}