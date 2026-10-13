//To demonstrate scan_f
#include<stdio.h>
int main(){
    int a;
    int b;
    int sum;
    printf("----Welcome to the Addition Program!----\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum=a+b;
    printf("The sum of %d and %d is %d", a, b, sum);
    return 0;
}


//Expected Output:
//----welcome to addition program----
//Enter the first number
//100
//Enter second number
//200
//The sum of 100 and 200 is 300 