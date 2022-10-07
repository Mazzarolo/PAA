#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MergeSort.h"

#define SIZE 10

void initialize (int* a) {
    srand(time(NULL));

    for (int i = 0; i < SIZE; i++)
    {
        a[i] = rand() % SIZE + 1;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
}

int findSum (int* a, int sum) {
    mergeSort(a, 0, SIZE - 1);
}

int main () {

    int a[SIZE];

    initialize(a);

    findSum (a, 14);

    return 0;
}