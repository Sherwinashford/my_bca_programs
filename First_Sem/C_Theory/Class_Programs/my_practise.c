//Expected output:
//1. Smallest of 3 numbers
//2. Largest of 3 numbers
//3. Check a number of ODD/Even
//4. Check for divisibility by 5
//5. Swap 2 numbers

#include <stdio.h>
int main(){
    int choice,num1,num2,num3,num,oddcheck,divcheck;
    printf("1. Smallest of 3 numbers\n2. Largest of 3 numbers\n3. Check a number of ODD/Even\n4. Check for divisibility by 5\n5. Swap 2 numbers");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch (choice) {
        case 1: 
        printf("Enter first number: ");
        scanf("%d",&num1);
        printf("Enter second number: ");
        scanf("%d",&num2);
        printf("Enter third number: ");
        scanf("%d",&num3);
        if (num1<num2) {
            if (num1<num3) {
                printf("The smallest number is %d",num1);
                break;
            } else {
            printf("The smallest number is %d",num3); 
            break;            
            }
        }   else if (num2<num3) {
                printf("The smallest number is %d",num2);
                break;
            } else {
                printf("The smallest number is %d",num3);
                break;
            }
        case 2: 
        printf("Enter first number: ");
        scanf("%d",&num1);
        printf("Enter second number: ");
        scanf("%d",&num2);
        printf("Enter third number: ");
        scanf("%d",&num3);
        if (num1>num2) {
            if (num1>num3) {
                printf("The largest number is %d",num1);
                break;
            } else {
            printf("The largest number is %d",num3); 
            break;            
            }
        }   else if (num2>num3) {
                printf("The largest number is %d",num2);
                break;
            } else {
                printf("The largest number is %d",num3);
                break;
            }
        case 3:
        printf("Enter a number: ");
        scanf("%d",&num);
        oddcheck=num%2;
        if (num==0) {
            printf("The number %d is even.",num);
        } else {
        printf("The number %d is odd.",num);
        }
        case 4:
        printf("Enter a number: ");
        scanf("%d",&num);
        divcheck=num%5;
        if (num==0) {
            printf("The number %d is divisible by 5.",num);
        } else {
        printf("The number %d is not divisible by 5.",num);
        }
        case 5:
        
    }
    
}