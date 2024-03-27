#include <stdio.h>

void printUnion(int A[], int B[], int n, int m) {
    bool hashSet[10000] = {false};
    int i;
    for (i = 0; i < n; i++) {
        hashSet[A[i]] = true;
    }
    for (i = 0; i < m; i++) {
        if (!hashSet[B[i]]) {
            hashSet[B[i]] = true;
        }
    }
    for (i = 0; i < 10000; i++) {
        if (hashSet[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}