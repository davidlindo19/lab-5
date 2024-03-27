#include <stdio.h>

void printIntersection(int A[], int B[], int n, int m) {
    int i, j;
    int intersection[n];
    int count = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                intersection[count++] = A[i];
                break;
            }
        }
    }
    for (i = 0; i < count; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
}