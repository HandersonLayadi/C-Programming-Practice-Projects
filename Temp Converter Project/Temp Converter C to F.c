# include <stdio.h>

int main(){

    int set;
    float num;
    int choice = 1;
    float result;

    while(choice == 1){
        printf("Choose to convert (1 = Celcius, 2 = Farenheit) : ");
        scanf("%d", &set);

        printf("Enter your number : ");
        scanf("%f", &num); 

        if (set == 1){
            result = num * (9.0/5.0) + 32;
            printf ("Your temperature %.2f C equals to : %.2f Farenheit\n", num, result);
        }

        else if(set == 2){
            result = (num - 32) * (5.0/9.0);
            printf("Your temperature %.2f F equals to : %.2f Celcius\n", num, result);
        }

        else {
            printf("Please choose 1 or 2!\n");
        }

        printf("Calculate again, Master? 1 = Y, 2 = No : ");
        scanf("%d", &choice);

    }

    return 0 ;
}