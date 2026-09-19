#include <stdio.h>

int main(){

    int Num;
    int Choice = 1;

    while(Choice == 1){
        printf("Your number :");
        scanf("%f", &Num);

        printf("Multiplication Table\n");
        
        int i;
        for (i = 1; i <= 10; i++){
            printf("%d x %d = %d \n", Num, i, Num * i); 
        }
        
        printf("Do you want to make another table? (1 = yes, 2 = no) : ");
        scanf("%d", &Choice);

    }

    printf ("Goodbye!\n");
    return 0;
}