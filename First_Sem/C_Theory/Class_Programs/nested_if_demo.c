
//Program to issue driver's license (to demonstrate nested if)
#include <stdio.h> //Includes stdio.h to the program
int main(){ //Execution starts from here
    int age;
    int isResident;
    int testPassed; //Bool style value
    int feesPaid; //Bool style value
    printf("----Welcome to the Driver's License Test----\n");
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18){
        printf("Are you an Indian resident? (1/0): ");
        scanf("%d",&isResident);
        if (isResident==1) {
            printf("Is driving test passed? (1/0): ");
            scanf("%d",&testPassed);
                if (testPassed==1) {
                    printf("Enter fees paid: ");
                    scanf("%d",&feesPaid);
                    if (feesPaid>=500) {
                        printf("You are eligible for driver's license (DL can be issued.)");
                    }
                    else {
                    printf("DL can't be issued for the following reason: Fees not paid");
                }
                }
            else {
                printf("DL can't be issued for the following reason: Driving test not passed");
        }
        }
    else {
        printf("DL can't be issued for the following reason: Not resident of India");
    }
    }
else {
    printf("DL can't be issued for the following reason: Age not over 18");
}
}
//Original output expected: "DL can be issued/can't be issues for below reason - Fee not paid"