#include <stdio.h>

int main(){

    int pin = 1234;
    int balance = 0;
    int amount;
    int choice;
    int depoCount = 0;
    int drawCount = 0;
    int transCount = 0;

    // PIN System:
    int attempts = 0;

    while (attempts < 3){

        printf("Hello Master, Please Enter Your PIN : ");
        scanf("%d", &pin);

        if (pin == 1234){
            printf("Login Successfull, Welcome Back Master !\n");

            do{
                
                printf("\n---MTM MENU---\n");
                printf("1. Check Balance\n");
                printf("2. Deposit\n");
                printf("3. Withdraw\n");
                printf("4. Transaction Report\n");
                printf("5. Exit\n");

                printf("Choose: ");
                scanf("%d", &choice);

                if (choice == 1){
                    printf("Your current balance is %d NTD, Master", balance);
                }
                else if (choice == 2){
                    printf("Enter an amount to deposit, Master : ");
                    scanf("%d", &amount);

                    if (amount <= 0){
                        printf("Invalid Amount, Master");
                        continue;
                    }

                    balance += amount;
                    printf("New Balance Successfully Deposited, Master\n");
                    printf("Your new balance currently is %d NTD, Master", balance);
                    depoCount++;
                    transCount++;
                }
                else if(choice == 3){
                    printf("Enter an amount to withdraw, Master : ");
                    scanf("%d", &amount);

                    if (amount <= 0){
                        printf("Invalid Amount, Master");
                        continue;
                    }

                    balance -= amount;
                    printf("Amount Successfully Withdrawed, Master");
                    printf("Your new balance currently is %d NTD, Master", balance);
                    drawCount++;
                    transCount++;

                }
                else if (choice == 4){
                    printf("\n===TRANSACTION REPORT===\n");
                    printf("Deposit Count : %d\n", depoCount);
                    printf("Withdraw Count : %d\n", drawCount);
                    printf("Total Transactions : %d", transCount);
                }

            }
            while(choice !=5);
            printf ("Goodbye Master !");
            break;
            
        }
        else {
            attempts++;

            if (attempts == 3){
                printf("You Are Not Master\n");
            }
            else {
                printf("Login Failed, Perhaps You Mistyped Master?\n");
            }
        }
    }
    return 0;
}