#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 5

struct funds
{
    char name[20];
    float poson;
};

float athroisma(char, struct funds *);

int main(){
    struct funds persons[N];
    char inp[20], ch;
    float count = 0;

    for(int i = 0; i < N; i++){
        printf("Dwse ena onoma: ");
        gets(persons[i].name);
        printf("Dwse ena poso: ");
        gets(inp);
        persons[i].poson = atof(inp);
    }

    printf("Dwse enan xarakthra: ");
    ch = getc(stdin);

    count = athroisma(ch, persons);

    printf("To athroisma einai: %f", count);
}

float athroisma(char ch, struct funds *persons){
    float c = 0;

    for(int i = 0; i < N; i++){
        if((persons + i)->name[0] == ch){
            c += (persons + i)->poson;
        }
    }
    return c;
}