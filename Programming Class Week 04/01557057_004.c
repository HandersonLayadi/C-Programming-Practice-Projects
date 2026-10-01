#include <stdio.h>

int main() {

    int testData;

    printf("How many sets of test data: ");
    scanf("%d", &testData);

    for (int i = 1; i <= testData; i++) {

        int x1, y1;
        int a, b, c;
        int r, s, t;
        int n;

        printf("x1 = ");
        scanf("%d", &x1);

        printf("y1 = ");
        scanf("%d", &y1);

        printf("a = ");
        scanf("%d", &a);

        printf("b = ");
        scanf("%d", &b);

        printf("c = ");
        scanf("%d", &c);

        printf("r = ");
        scanf("%d", &r);

        printf("s = ");
        scanf("%d", &s);

        printf("t = ");
        scanf("%d", &t);

        printf("n = ");
        scanf("%d", &n);

        int x = x1;
        int y = y1;

        for (int j = 1; j <= n; j++) {

            printf("n = %d, (x, y) = (%d, %d)\n", j, x, y);

            int newX = a * x + b * y + c;
            int newY = r * x + s * y + t;

            x = newX;
            y = newY;
        }
    }

    return 0;
}