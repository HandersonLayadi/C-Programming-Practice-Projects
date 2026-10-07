#include <stdio.h>

int isLeapYear(int year);
int isInvalidDate(int year, int month, int day);

int main(){
    int ti, year , month, day;
    int testData;

    printf("How many sets of test data: ");
    scanf("%d", &testData);

    for(int i = 0; i < testData; i++){

        printf("\nInput a date (year/month/day): ");
        scanf("%d/%d/%d", &year, &month, &day);

        printf("%d/%d/%d is %s valid date.\n", year, 
            month, 
            day, 
            isInvalidDate(year, month, day) ? "not a" : "a");
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

int isInvalidDate(int year, int month, int day){
    if (year <= 0){
        return 1;
    }

    if (month < 1 || month > 12){
        return 1;
    }

    if (month == 2){
        if (isLeapYear(year)){
            if (day < 1 || day > 29){
                return 1;
            }
        }
        else{
            if (day < 1 || day > 28){
                return 1;
            }
        }
    }

    else if( month == 4 || month == 6 || month == 9 || month == 11){
        if (day < 1 || day > 30 ){
            return 1;
        }
    }
    else{
        if (day < 1 || day > 31){
            return 1;
        }
    }
    return 0;
}