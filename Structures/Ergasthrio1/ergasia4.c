#include<stdio.h>
#include<stdlib.h>

#define N 5

int max(int [], int);

int main(){
    int list[N], ak, k = -1, meg = 0;

    do
    {
        k++;
        printf("Dose akeraio: ");
        scanf("%d", &ak);
        list[k] = ak;
    } while ((ak != 0) && (k < N - 1));

    meg = max(list, k);

    printf("O megaluteros ari8mos einai o: %d", meg);
}

int max(int list[], int k){
    int meg = 0;

    for(int i = 0; i <= k; i++){
        if(meg < list[i]){
            meg = list[i];
        }
    }

    return meg;
}