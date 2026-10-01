#include <stdio.h>

int main() {

    int testData;

    int A[20][20];
    int B[20][20];
    int C[20][20];

    printf("Both A and B are matrices with m x n elements.\n\n");

    printf("How many sets of test data: ");
    scanf("%d", &testData);

    for (int k = 1; k <= testData; k++) {

        int m, n;

        printf("\nInput values of m and n: ");
        scanf("%d %d", &m, &n);

        printf("Input numbers in matrix A: ");

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Input numbers in matrix B: ");

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }

        printf("Numbers in matrix C are:\n");

        printf("{{");

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {

                printf("%d", C[i][j]);

                if (j < n - 1) {
                    printf(", ");
                }
            }

            if (i < m - 1) {
                printf("},\n{");
            }
        }

        printf("}}\n");
    }

    return 0;
}