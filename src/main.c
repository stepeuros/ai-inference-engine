#include <stdio.h>
#include "matrix.h"

int main() {
    int N = 2;
    int A[4] = {1, 2, 3, 4};
    int B[4] = {5, 6, 7, 8};
    int C[4] = {0};

    matmul(A, B, C, N);

    printf("Result:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", C[i*N+j]);
        }
        printf("\n");
    }
    return 0;
}