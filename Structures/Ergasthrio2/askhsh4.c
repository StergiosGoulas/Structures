#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define R 5
#define C 50

int main(){
    char pinax[R][C];
    int count = 0, max = 0, cnt = 0, i;

    for(i = 0; i < R; i++){
        printf("Dwse ti %dh leksi\n", i + 1);
        gets(pinax[i]);
        
        if(strlen(pinax[i]) == 0){
            break;
        }
    }

    for(int k = 0; k < i;  k ++){
        for(int j = 0; pinax[k][j] != '\x0'; j++){
            count++;
            cnt++;
        }
        
        if(cnt > max){
            max = cnt;
        }
        cnt = 0;
    }

    printf("To sunolo ton xarakthrwn einai %d\n", count);
    printf("H megaluterh sumboloseira exei %d xarakthres\n", max);
}