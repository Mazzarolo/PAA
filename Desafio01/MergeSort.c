#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define INF 2147483647

void merge (int* a, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int l[n1 + 1], r[n2 + 1];

    for (int i = 0; i < n1; i++)
    {
        l[i] = a[start + i];
    }

    for (int i = 0; i < n2; i++)
    {
        r[i] = a[mid + i + 1];
    }

    l[n1] = INF;
    r[n2] = INF;

    int i = 0, j = 0, k;

    for (k = start; i < n1 && j < n2; k++)
    {
        if (l[i] <= r[j])
        {
            a[k] = l[i];
            i++;
        } else {
            a[k] = r[j];
            j++;
        }
    }

    while (i < n1) 
    {
        a[k] = l[i];
        k++;
        i++;
    }
    
    while (j < n2) 
    {
        a[k] = r[j];
        k++;
        j++;
    }
}

void mergeSort (int* a, int start, int end) {
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}