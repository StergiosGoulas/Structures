#include<stdio.h>
#include<stdlib.h>

#define N 10

void input(int*);
void display(int*);

void addarray(int*, int*, int*);

int main () {
    int a[N], b[N], c[N];

    printf ("Eisagwgi stoixeiwn 1ou Pinaka \n");
    input(a);
    
    printf ("Eisagwgi stoixeiwn 2ou Pinaka \n");
    input(b);
    
    addarray(a, b, c);
    
    printf ("To athroisma twn Stoixeiwn twn Pinakwn einai: \n");
    display(c);
    
    return 0;
}

void input (int c[] ) {
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &c[i]);
 }
}

void addarray (int a[], int b[], int c[]) {
    int i;
    for (i = 0; i < N; i++) {
    c[i] = a[i] + b[i];
    }
}

void display (int d[]) {
    int i;
    for (i = 0; i < N; i++) {
    printf(" %d\n ", d[i]);
    }
}