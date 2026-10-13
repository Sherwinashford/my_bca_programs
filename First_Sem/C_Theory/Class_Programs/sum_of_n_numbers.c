//Objective: Write a program to get the sum of numbers from 5 to n
//Expected Output:
//Enter N Value: 10 
//Sum of Numbers from 5 to 10 is ____
//(5+6+7+8+9+10)

#include <stdio.h>
int main(){
    int number;
    int sum=0;
    int counter=5;
    printf("Enter N Value: ");
    scanf("%d",&number);
    if (number>5) {
        for (int counter=5;counter<=number;counter++)
        {
            sum+=counter;
        }
        printf("Sum of numbers from 5 to %d is %d",number,sum);
    } 
    else {
    printf("Please enter a value of 'N' greater than 5");
    }
}