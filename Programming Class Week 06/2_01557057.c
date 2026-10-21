#include <stdio.h>

int main()
{
    int A[20], B[20], C[20];
    int m, n, p;
    int testData;
    int i, j, k;

    printf("A is a matrix with m x n elements and\n");
    printf("B is a matrix with n x p elements.\n");

    printf("\nHow many sets of test data: ");
    scanf("%d", &testData);

    for (int t = 1; t <= testData; t++)
    {
        printf("\nInput values of m, n, p: ");
        scanf("%d %d %d", &m, &n, &p);

        printf("Input numbers in matrix A: ");
        for (i = 0; i < m * n; i++)
        {
            scanf("%d", &A[i]);
        }

        printf("Input numbers in matrix B: ");
        for (i = 0; i < n * p; i++)
        {
            scanf("%d", &B[i]);
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                C[i * p + j] = 0;

                for (k = 0; k < n; k++)
                {
                    C[i * p + j] +=
                        A[i * n + k] * B[k * p + j];
                }
            }
        }

        printf("Numbers in matrix C are:\n");
        printf("{");

        for (i = 0; i < m; i++)
        {
            printf("{");

            for (j = 0; j < p; j++)
            {
                printf("%d", C[i * p + j]);

                if (j < p - 1)
                {
                    printf(", ");
                }
            }

            printf("}");

            if (i < m - 1)
            {
                printf(",\n");
            }
        }

        printf("}\n");
    }

    return 0;
}
