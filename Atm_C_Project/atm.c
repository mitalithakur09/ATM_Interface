#include <stdio.h>

int main(){

 float total_amount, transfer, deposit, withdraw, check_balance;
 int pin, password, user_input;

 printf("Enter your password to enter in your account");
 scanf("%d", &password);
 printf("Enter amount to create account");
 scanf("%f", &total_amount);
 printf("Enter 1 to checka_balance \n. Enter 2 for deposit\n. Enter 3 for withdraw\n. Enter 4 for transfer");
 scanf("%d", user_input);
 printf("Enter pin \n");
 scanf("%d", &pin);

 if(pin == password){

 switch (user_input)
 {
 case 1:
     printf("Your total amount in your account is: %f", total_amount);
    break;
 case 2:
     printf("Amount you deposit is: %f", deposit);
     scanf("%f", &deposit);
     float net_balance_after;
     net_balance_after = total_amount + deposit;
     printf("Net balance after is: %f", net_balance_after);
    break;
 case 3:
     printf("Amount you withdraw is: %f", withdraw);
     scanf("%f", &withdraw);
     float balance_after_withdraw;
     balance_after_withdraw = total_amount - withdraw;
     printf("Balance after withdraw is: %f", balance_after_withdraw);
    break;
 case 4:
     printf("Amount you transfer is: %f", transfer);
     scanf("%f", &transfer);
     float balance_after_transfer;
     balance_after_transfer = total_amount - transfer;
     printf("BAlance after transfer is: %f", balance_after_transfer);
    break;
 default:
     printf("Enter valid user input");
    break;
 }
 }
 else{
    printf("enter correct password");
 }

}