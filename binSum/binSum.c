#include <stdio.h>

#define N 5

int main () {
    int a[N] = {1, 0, 1, 0, 0}, b[N]  = {0, 1, 0, 1, 0}, c[N + 1]; 
    int est = 0;

    for(int i = N - 1; i >= 0; i--) {
        int aux = a[i] + b[i] + est;
        if (aux == 2) {
            c[i + 1] = 1;
            est = 1;
        } else if (aux == 1) {
            c[i + 1] = 1;
            est = 0;
        } else {
            c[i + 1] = 0;
            est  = 0;
        }
    }

    c[0] = est;

    for(int i = 0; i <= N; i++)
        printf("%d", c[i]);

    return 0;
}
