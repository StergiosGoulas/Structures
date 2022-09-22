#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stype{
    int j;
    char ch[30];
    float fp;
};

void struct_swap(struct stype*, struct stype*);

int main(){
    struct stype str1, str2;
    char inp[20];

    printf("Dwse enan int: ");
    gets(inp);
    str1.j = atoi(inp);
    printf("Dwse mia sumboloseira: ");
    gets(str1.ch);
    printf("Dwse enan float: ");
    gets(inp);
    str1.fp = atof(inp);

    printf("Dwse enan int: ");
    gets(inp);
    str2.j = atoi(inp);
    printf("Dwse mia sumboloseira: ");
    gets(str2.ch);
    printf("Dwse enan float: ");
    gets(inp);
    str2.fp = atof(inp);

    struct_swap(&str1, &str2);

    printf("str1: %d    %s  %f\n", str1.j, str1.ch, str1.fp);
    printf("str2: %d    %s  %f", str2.j, str2.ch, str2.fp);
}

void struct_swap(struct stype *str1, struct stype *str2){
    struct stype str_swap;

    str_swap = *str1;
    *str1 = *str2;
    *str2 = str_swap;
}