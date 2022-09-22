#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct one{
    int ak;
    char pin[30];
};

struct two{
    int data;
    int mat[20];
    struct one item;
    struct one melos;
};


int main(){
    struct one person;
    struct two memb;
    char p[30];

    printf("Gemisma ths person(struct one)\n");
    printf("Dwse enan int: ");
    gets(p);
    person.ak = atoi(p);
    printf("Dwse mia sumboloseira: ");
    gets(person.pin);

    printf("Gemisma ths memb(struct two)\n");
    printf("Dwse enan int: ");
    gets(p);
    memb.data = atoi(p);
    for(int i = 0; i < 20; i++){
        printf("Dwse enan int: ");
        gets(p);
        memb.mat[i] = atoi(p);
    }
    printf("Dwse enan int: ");
    gets(p);
    memb.item.ak = atoi(p);
    printf("Dwse mia sumboloseira: ");
    gets(memb.item.pin);
    printf("Dwse enan int: ");
    gets(p);
    memb.melos.ak = atoi(p);
    printf("Dwse mia sumboloseira: ");
    gets(memb.melos.pin);

    strcpy(memb.item.pin, person.pin);

    printf("To mhkos ths sumboloseiras tou pinaka melos ths struct memb einai: %d", strlen(memb.melos.pin));

    if(strlen(person.pin) + strlen(memb.melos.pin) < 30){
        strcat(person.pin, memb.melos.pin);
    }

    memb.melos = memb.item;
}