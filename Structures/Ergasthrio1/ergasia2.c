#include<stdio.h>
#include<stdlib.h>

#define N 50

int main(){
    int pin[N];

    for(int i = 0; i < N; i++){
        printf("Dose enan akeraio: ");
        scanf("%d", pin + i);
    }

    for(int i = 0; i < N; i++){
        printf("pin[%d] = %d/n", i, pin[i]);
    }
}