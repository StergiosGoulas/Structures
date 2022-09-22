#include<stdio.h>
#include<stdlib.h>

#define N 5

int anti(int [][N]);

int main(){
    int pinax[N][N], antisummetrikos;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("pinax[%d][%d] = ", i, j);
            scanf("%d", &pinax[i][j]);
        }
    }

    if(antisummetrikos = anti(pinax)){
        printf("O pinax einai antismmetrikos!");
    }else{
        printf("O pinax den einai antisummetrikos!");
    }
}

int anti(int pinax[N][N]){
    int c = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(((i == j) && (pinax[i][j] == 0)) || (i!=j) && (pinax[i][j] == -pinax[j][i])){
                c++;
            }
        }
    }

    if(c == N*N){
        return 1;
    }else{
        return 0;
    }
}