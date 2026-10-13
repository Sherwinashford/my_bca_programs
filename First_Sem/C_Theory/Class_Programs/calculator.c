#include <stdio.h>
int main(){
    int a;
    int b;
    int sum;
    int diff;
    int prod;
    int quo;
    int choice;
    printf("----Welcome to the Calculator!---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        sum=a+b;
        printf("The sum is: %d\n",sum);

    }
    if (choice == 2){
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        diff=a-b;
        printf("The difference is: %d\n",diff);
        
    }
    if (choice == 3){
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        prod=a*b;
        printf("The product is: %d\n",prod);

    }
    if (choice == 4){
        printf("Enter first number: ");
        scanf("%d",&a);
        printf("Enter second number: ");
        scanf("%d",&b);
        quo=a/b;
        printf("the quotient is: %d\n",quo);
    }
    printf("Program is terminated.");
    return 0;
} 

// Expected Output:
// ----Welcome to my calculator----
//1. Addititon
//2. Subtraction
//3. Multiplication
//4. Division
//Enter your choice: 1
//Enter first number: 10
//Enter second number: 12
//The sum is 30
//---END------------------