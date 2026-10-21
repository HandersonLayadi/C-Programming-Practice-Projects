#include <stdio.h>

int main() {
    int a[100];
    int n, i, x, count = 0;

    printf("How many numbers: ");
    scanf("%d", &n);

    while (n<=0){
    printf("How many numbers: ");
    scanf("%d", &n);
    }

    printf("Please input numbers: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Check which number's multiples? ");
    scanf("%d", &x);

    for(i = 0; i < n; i++){
        if(a[i] % x == 0){
            printf("a[%d] = %d\n", i, a[i]);
            count++;
        }
    }

    printf("Found %d multiple(s).", count);

    return 0;
}
