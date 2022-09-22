#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 5

struct funds{
    char name[20];
    float poson;
};

struct funds reading();
void display(struct funds *);

int main(){
    struct funds persons[N];

    for(int i = 0; i < N; i++){
        persons[i] = reading();
    }

    display(persons);
}

struct funds reading(){
    struct funds new;
    char inp[20];

    printf("Dwse ena onoma: ");
    gets(new.name);
    printf("Dwse ena poso: ");
    gets(inp);
    new.poson = atof(inp);

    return new;
}

void display(struct funds *persons){
    for(int i = 0; i < N; i++){
        printf("\npersons[%d]: name->%s\n poson->%f", i, (persons + i)->name, (persons + i)->poson);
    }
}