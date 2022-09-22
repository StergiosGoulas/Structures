#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define R 5
#define C 20

int main(){
    char students[R][C], stud[C];

    for(int i = 0; i < R; i++){
        printf("Dose onoma foithth: ");
        scanf("%s", students[i]);
    }

    for(int i = 0; i < R; i++){
        printf("students[%d] = %s\n", i, students[i]);
    }

    for(int i = 0; i < R; i++){
        for(int j = i+1; j < R; j++){
            if(students[i][0] > students[j][0]){
                strcpy (stud, students[i]);
                strcpy(students[i], students[j]);
                strcpy(students[j], stud);
                
            }
        }
    }

    for(int i = 0; i < R; i++){
        printf("students[%d] = %s\n", i, students[i]);
    }
    
}