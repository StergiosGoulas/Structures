#include<stdio.h>
#include<stdlib.h>

#define N 5

int tau(int [][N]);

int main(){
    int pinax[N][N], tautotikos;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("pinax[%d][%d] = ", i, j);
            scanf("%d", &pinax[i][j]);
        }
    }

    if(tautotikos = tau(pinax)){
        printf("O pinax einai tautotikos!");
    }else{
        printf("O pinax den einai tautotikos!");
    }
}

int tau(int pinax[N][N]){
    int c = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if((i == j) && (pinax[i][j] == 1)){
                c++;
            }
        }
    }

    if(c == N){
        return 1;
    }else{
        return 0;
    }
}