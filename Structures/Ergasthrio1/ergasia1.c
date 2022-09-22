#include<stdio.h>
#include<stdlib.h>

#define N 50

int main(){
    int x = 0, i = 0;
    int pin[N];

    printf("Dose enan akeraio: ");
    scanf("%d", &x);

    while ((x / 2) != 0 ){
        pin[i] = x % 2;
        x = x / 2;
        i++;
    }

    for(int j = 0; j <= i; j++)
        printf("%d", pin[j]);
    
    

}