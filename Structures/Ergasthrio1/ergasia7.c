#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void sort (int*, int);

int main () {
    int list[SIZE];
    int k, meg, ak,i;
    
    for (k = 0; k < SIZE; k++) {
        scanf("%d", &ak);
        if (ak == 0) {
            break;
        }
    else {
        list[k] = ak;
    }
    }
    
    sort(list, k);

    for (k = 0; k < SIZE; k++) {
        printf("%d\n", list[k]);
    }
 
    return 0;
}

void sort (int slist[], int snum) {
    int sout, sin, stemp;
    for (sout = 0; sout < snum - 1; sout++) {
        for (sin = sout + 1; sin < snum; sin++) {
            if (slist[sout] > slist[sin]) {
                stemp = slist[sin];
                slist[sin] = slist[sout];
                slist[sout] = stemp;
            }
        }
    }
}