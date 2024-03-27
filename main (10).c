#include <stdio.h>

void printDifference(int A[], int B[], int n, int m) {
    int hashSet[10000] = {false};
    int i;
    for (i = 0; i < m; i++) {
        hashSet[B[i]] = true;
    }
    for (i = 0; i < n; i++) {
        if (!hashSet[A[i]]) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
}