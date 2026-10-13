//Expected Output:
//------Welcome to my Bank------
//1. Create Account
//2. Deposit
//3. Withddraw
//4. Account View
//5. Exit
//Enter your option: 1
//Enter account number: 1000

#include <stdio.h>
int main(){
    int accountid=1000;
    double balance=500;
    int choice;
    int newaccountid;
    double depositamt;
    int chkaccid;
    double withdrawamt; //can also use int choice, intaccountid,...;
do {
printf("------Welcome to my Bank------");
printf("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Account View\n5. Exit\n\n Enter your choice: ");
scanf("%d",&choice);
switch (choice) {
    case 1:
    printf("Enter account id: ");
    scanf("%d",&newaccountid);
    printf("Account created. Your account number is %d",newaccountid);
    break;
    case 2:
    printf("Enter account number: ");
    scanf("%d",&chkaccid);
    if (chkaccid==accountid) {
        printf("Account ID valid. ");
        printf("Your balance is %f",balance);
        printf("\nEnter amount to deposit: ");
        scanf("%lf",&depositamt);
        balance=balance+depositamt;
        printf("Account balance updated.\nYour new balance is %f",balance);
    } else {
        printf("Account ID not valid.");
        break;
    }
    case 3:
    printf("Enter account number: ");
    scanf("%d",&chkaccid);
    if (chkaccid==accountid) {
        printf("Account ID valid. ");
        printf("Your balance is %f",balance);
        printf("\nEnter amount to withdraw: ");
        scanf("%lf",&withdrawamt);
        if (withdrawamt>=balance) {
            printf("Error: Insufficient funds to withdraw");
        break; 
        }
        balance=balance-withdrawamt;
        printf("Account balance updated.\nYour new balance is %f",balance);
    } else {
        printf("Account ID not valid.");
    }
    case 4:
    printf("Enter account number: ");
    scanf("%d",&chkaccid);
    if (chkaccid==accountid) {
        printf("Account ID valid.");
        printf("\n Your account number is %d\nYour balance is %f",accountid,balance);
        break;
    }
}
} while (choice!=5)
}
