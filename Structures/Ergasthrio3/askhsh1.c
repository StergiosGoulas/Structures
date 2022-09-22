#include<stdio.h>
#include<stdlib.h>

struct stype{
    int j;
    char ch[30];
    float fp;
};


int main(){
    struct stype str1, str2, swap;
    char pin[10];

    printf("Gemisma struct str1\n");
    printf("Dose enan int: ");
    gets(pin);
    str1.j = atoi(pin);    
    printf("Dose mia sumboloseira: ");
    gets(str1.ch);
    printf("Dose enan float: ");
    gets(pin);
    str1.fp = atof(pin);

    printf("Gemisma struct str2\n");
    printf("Dose enan int: ");
    gets(pin);
    str2.j = atoi(pin);    
    printf("Dose mia sumboloseira: ");
    gets(str2.ch);
    printf("Dose enan float: ");
    gets(pin);
    str2.fp = atof(pin);

    swap = str1;
    str1 = str2;
    str2 = swap;

    printf("str1\n j:%d   ch:%s   fp:%f", str1.j, str1.ch, str1.fp);
    
    printf("\nstr2\n j:%d   ch:%s   fp:%f", str2.j, str2.ch, str2.fp);
}