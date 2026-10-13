//Program to display both sum and difference of given numbers. Successor of scanf_demo.
#include<stdio.h>
int main(){
    int a;
    int b;
    int sum;
    int diff;
    printf("----Welcome to the Addition and Subtraction Program!----\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum=a+b;
    diff=a-b;
    printf("The sum of %d and %d is %d", a, b, sum);
    printf("\nThe difference of %d and %d is %d", a, b, diff);
    return 0;
}