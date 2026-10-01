#include <stdio.h>

int main() {

    int n;

    printf("n = ");
    scanf("%d", &n);

    int C[100][100];

    for (int i = 0; i <= n; i++) {
        C[i][0] = 1;
        C[i][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int k = 1; k < i; k++) {
            C[i][k] = C[i - 1][k - 1] + C[i - 1][k];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int k = 0; k <= i; k++) {
            printf("C(%d, %d) = %d\n", i, k, C[i][k]);
        }
    }

    return 0;
}