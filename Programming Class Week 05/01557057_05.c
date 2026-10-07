#include <stdio.h> 

int isLeapYear(int year);

int main(){
    int testData, year;

    printf("How many sets of test data: ");
    scanf("%d", &testData);

    for(int i = 0; i < testData; i++){
        printf("\nInput a year: ");
        scanf("%d", &year);

        printf("%d is %s leap year.\n", year, isLeapYear(year) ? "a" : "not a");
    }

    return 0;
}

int isLeapYear(int year){
    if (year % 400 == 0){
        return 1;
    }
    else if (year % 100 == 0){
        return 0;
    }
    else if (year % 4 == 0){
        return 1;
    }
    else {
        return 0;
    }
}