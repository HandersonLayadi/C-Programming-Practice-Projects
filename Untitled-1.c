#include <stdio.h>

int digitCount(int n){
    int count =0;
    if (n < 0 ) n = -n;
    if (n == 0) return 1;
    while (n > 0){
        count++;
        n/= 10;
    }
    return count;
}

int mypower(int x, int y){
    int result = 1, i;
    if (x == 0) return 0;
    for (i = 0; i < y; i++) result *= x;
    return result;
}

int main(){
     printf("digitCount(245) = %d (expected 3)\n", digitCount(248765));
     printf("mypower(5, 3) = %d (expected 125)\n", mypower(5, 3));


}