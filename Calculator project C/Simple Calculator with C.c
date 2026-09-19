#include <stdio.h>

int main(){

    int num1;
    int num2;
    int operator;
    float result;
  

    printf("First Number : ");
    scanf("%d", &num1);

    printf("Second Number : ");
    scanf("%d", &num2);

    printf("Choose an Operator (1. +, 2. -, 3. x 4, /) : ");
    scanf("%d", &operator);

    if (operator == 1){
        result = num1 + num2;
        printf("Your Answer is : %2d ", result);
    }
    else if(operator == 2){
        result = num1 - num2;
        printf("Your Answer is : %d ", result);
    }
    else if(operator == 3){
        result = num1 *  num2;
        printf("Your Answer is : %d ", result);
    }
    else if(operator == 4){
        result = (float)num1 / num2;
        printf("Your Answer is : %.2f ", result);
    }
    return 0;
}