#include <stdio.h> 

int isPrime(int n);

int main(){
    int testData;
    int num;

    printf("How many sets of test data: ");
    scanf("%d", &testData);

    printf("\n");

    for (int i = 0; i < testData; i++){
        printf("Input a number (>= 6): ");
        scanf("%d", &num);

        for (int i = 2; i <= num; i++){
            if(! isPrime(i)){
                continue;
            }
            for (int j = i; j <= num; j++){
                int k = num - i - j;
                if (k < j){
                    break;
                }
                if (isPrime(j) && isPrime(k)){
                    printf("%d = %d + %d + %d\n", num, i, j, k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

int isPrime(int n){
    if ( n < 2){
        return 0;
    }
    for(int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}

