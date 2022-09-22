#include <stdio.h>

#define N 10

float average (float []);

int main () {
    float avg, c[N];
    int k;

    for (k = 0; k < N; k++) {
        scanf ("%f", &c[k]);
    }
    
    avg = average(c);
    printf ("Average age=%.2f", avg);

    return 0;
}

float average (float a[]) {
    int i;
    float avg, sum = 0.0;
    
    for (i = 0; i < N; i++) {
        sum += a[i];
    }

    avg = sum / N;
    
    return avg;
}
