#include <stdlib.h>
#include <stdio.h>

#define TAM 10

int binSearchIter (int* a, int v) {
    int low = 0, high = TAM - 1, mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (a[mid] == v)
        {
            return mid;
        } else if (a[mid] < v) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return -1;
}

int binSearchRec (int* a, int v, int low, int high) {
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (a[mid] == v)
    {
        return mid;
    } else if (a[mid] < v) {
        return binSearchRec (a, v, mid + 1, high);
    } else {
        return binSearchRec (a, v, low, mid);
    }
}

int binSearch (int* a, int v) {
    binSearchRec(a, v, 0, TAM - 1);
}

int main() {
    int a[TAM] = {0, 0, 1, 3, 5, 5, 6, 7, 8, 9};

    int pos = binSearch(a, 1);

    printf("%d\n", pos);

    pos = binSearchIter(a, 1);

    printf("%d", pos);

    return 0;
}
