#include<stdio.h>
#include<stdlib.h>

#define N 5

int summ(int [][N]);
int trig(int [][N]);
int ar(int [][N]);

int main(){
    int pinax[N][N];
    int summetrikos, trigwnikos, araios;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("pinax[%d][%d] = ", i, j);
            scanf("%d", &pinax[i][j]);
        }
    }

    if(summetrikos = summ(pinax)){
        printf("O pinax einai summetrikos!");
    }else{
        printf("O pinax den einai summetrikos!");
    }

    trigwnikos = trig(pinax);
    if(trigwnikos == 1){
        printf("O pinax einai anw trigwnikos!");
    }else if (trigwnikos == 2){
        printf("O pinax einai katw trigwnikos!")
    }else{
        printf("O pinax den einai trigwnikos!");
    }

    if(araios = ar(pinax)){
        printf("O pinax einai araios!");
    }else{
        printf("O pinax den einai araios!");
    }
}

int summ(int pinax[N][N]){
    int c = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(pinax[i][j] == pinax[j][i]){
                c += 1;
            }
        }
    }

    if(c == N*N){
        return 1;
    }else{
        return 0;
    }
}

int trig(int pinax[N][N]){
    int canw = 0, ckatw = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if((j > i) && (pinax[i][j] == 0)){
                canw += 1;
            }

            if((J < i) && (pinax[i][j] == 0)){
                ckatw += 1;
            }
        }

        if(canw == (N*N-N)/2){
            return 1;
        }else if (ckatw == (N*N-N)/2)
        {
            return 2;
        }else{
            return 0;
        }
    }
}

int ar(int pinax[N][N]){
    int c = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(pinax[i][j] == 0){
                c += 1;
            }
        }
    }

    if((c/(N*N)) > 0.8){
        return 1;
    }else{
        return 0;
    }
}