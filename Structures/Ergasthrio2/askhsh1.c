#include<stdio.h>
#include<stdlib.h>

#define M 20
#define N 5

int better(int [][N]);

int main(){
    int grades[M][N], best = -1;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("grades[%d][%d] = ", i, j);
            scanf("%d", grades[i]+j);
        }
    }

    best = better(grades);

    printf("O kaluteros ba8mos einai o %d", best);
}

int better(int grades[M][N]){
    int best = -1;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(grades[i][j] > best){
                best = grades[i][j];
            }
        }
    }

    return best;
}