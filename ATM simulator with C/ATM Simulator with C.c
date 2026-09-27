#include <stdio.h>

int main(){

    int pin = 1234;
    int balance = 0;
    int amount;
    int choice;

    int depoCount = 0;
    int drawCount = 0;
    int transCount = 0;

    int transactions[100];

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

                // Check Balance
                if (choice == 1){

                    printf("Your current balance is %d NTD, Master\n", balance);

                }

                // Deposit
                else if (choice == 2){

                    printf("Enter an amount to deposit, Master : ");
                    scanf("%d", &amount);

                    if (amount <= 0){
                        printf("Invalid Amount, Master\n");
                        continue;
                    }

                    balance += amount;

                    printf("Amount Successfully Deposited, Master\n");
                    printf("Your new balance currently is %d NTD, Master\n", balance);

                    depoCount++;

                    // Store transaction first
                    transactions[transCount] = amount;
                    transCount++;
                }

                // Withdraw
                else if (choice == 3){

                    printf("Enter an amount to withdraw, Master : ");
                    scanf("%d", &amount);

                    if (amount <= 0){
                        printf("Invalid Amount, Master\n");
                        continue;
                    }

                    if (amount > balance){
                        printf("Insufficient Balance, Master\n");
                        continue;
                    }

                    balance -= amount;

                    printf("Amount Successfully Withdrawn, Master\n");
                    printf("Your new balance currently is %d NTD, Master\n", balance);

                    drawCount++;

                    // Store withdrawal as negative
                    transactions[transCount] = -amount;
                    transCount++;
                }

                // Transaction Report
                else if (choice == 4){

                    printf("\n=== TRANSACTION REPORT ===\n");

                    for (int i = 0; i < transCount; i++){

                        printf("Transaction %d: %d NTD\n",
                               i + 1,
                               transactions[i]);
                    }

                    printf("Deposit Count : %d\n", depoCount);
                    printf("Withdraw Count : %d\n", drawCount);
                    printf("Total Transactions : %d\n", transCount);
                }

                // Invalid Menu Choice
                else if (choice != 5){

                    printf("Invalid Choice, Master\n");
                    continue;
                }

            }
            while(choice != 5);

            printf("Goodbye Master !\n");

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