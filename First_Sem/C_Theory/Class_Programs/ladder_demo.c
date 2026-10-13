//Objective: To demonstrate else-if ladder functionality.
#include <stdio.h>

int main(){
    char grade;
    int marks = 72;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if (marks >= 90) {
        printf("Grade: Distinction");
     } else if (marks >= 75) {
        printf("Grade: First Class");
     } else if (marks >= 60) {
        printf("Grade: Second Class"); 
     } else if (marks >=40) {
        printf("Grade: Third Class");
     } else {
        printf("Grade: Fail");
     }
    }