#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

typedef struct item {
    float valor;
    float peso;
} Item;

bool is_sorted(int *a, int n) {
    while ( --n >= 1 ) {
        if ( a[n] < a[n-1] ) return false;
    }
    return true;
}
 
void shuffle(int *a, int n) {
    int i, t, r;
    for (i=0; i < n; i++) {
        t = a[i];
        r = rand() % n;
        a[i] = a[r];
        a[r] = t;
    }
}
 
void bogosort(int *a, int n) {
    while (!is_sorted(a, n)) shuffle(a, n);
}

int* mochilaFrac(Item* itens, int wt) {
    
}

int main () {
    
    Item itens[TAM];

    srand(time(NULL));
        
    for (int i = 0; i < TAM; i++) {
        itens[i].valor = rand() % 1000;
        itens[i].peso = rand() % 100;
    }
    
    for (int i = 0; i < TAM; i++) {
        printf("Valor: %.2f Peso: %.2f\n", itens[i].valor, itens[i].peso);
    }

    return 0;
}
