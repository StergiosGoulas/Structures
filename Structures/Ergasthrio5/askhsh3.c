#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 20

void push(int);
int pop();

int stak[N];
int sp;

int main(){
    char pin[N];
    char ch;
    int ak, tela, telb, k = 0, err = 0, res;

    printf("Dwse metadiatetagmenh parastash: ");
    gets(pin);

    while(pin[k] != '\x0'){
        ch = pin[k];
        if(ch >= '0' && ch <= '9'){
            ak = ch - 48;
            push(ak);
        }else{
            tela = pop();
            telb = pop();
            switch(ch){
                case '+':
                    push(telb + tela);
                    break;
                case '-':
                    push(telb - tela);
                    break;
                case '*':
                    push(telb * tela);
                    break;
                case '/':
                    push(telb / tela);
                    break;
                default:
                    printf("Lathos\n");
                    err = 1;
            }
            if(err == 1)
                break;
        }
        k++;
    }
    res = pop();
    printf("\n%d\n", res);
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