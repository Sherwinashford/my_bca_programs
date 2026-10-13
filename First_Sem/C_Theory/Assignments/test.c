// #include <stdio.h>
 
// int factorial(int n) {
//     if (n == 0)                      /* base case */
//         return 1;
//     int ref= n * factorial(n - 1);
//     return n * factorial(n - 1);     /* recursive step */
// }

// int main(){
//     int n=5;
//     int ans=factorial(n);
//     printf("%d",ans);
// }


// Write a C program that stores and processes the marks of 5 students in 5 subjects. For each student, the program calculates the total, average, percentage and result.
// Context:
// A class teacher needs a simple program to prepare a result sheet. Each student has a roll number, a name, and marks in 5 subjects. Each subject is marked out of 100. The program should read these details for all 5 students and store the marks. It should then use loops to traverse each student's marks and compute the following:
// Total marks: the sum of the marks in all 5 subjects (out of 500).
// Average: Total ÷ 5.
// Percentage: (Total ÷ 500) × 100.
// Result: "PASS" if the student scores at least 35 in every subject, otherwise "FAIL".
// Finally, the program displays a neatly formatted result table for all students.
// Input:
// For each of the 5 students: roll number (integer), name (string) and marks in 5 subjects (integers from 0 to 100).
// Output:
// A table showing Roll No, Name, the marks in each subject, Total, Average, Percentage and Result for every student

// Program must be implemented using Loop, Functions and Arrays. Each action/process/sub-task must be implemented using functions.

// read_details, readMarks, validate_marks
// with loops: findTotal, avg, perc,
#include <stdio.h>

void read_name(name){
    printf("Enter Name: ");
    scanf("%s",name);
    return name;
}

void read_rollno(){
    int rollno;
    printf("Enter roll number: ");
    scanf("%d",&rollno);
    return rollno;
} 

int read_marks(int student_marks[5]){
    for (int i=0; i<5;i++){
        printf("Enter subject %d marks: ",i+1);
        scanf("%s",&student_marks[i]);
    }
    return student_marks;
}

int validate_marks(int marks_array[]){
    char result[5]="PASS";
    for (int i=0; i>sizeof(marks_array); i++){
        if (marks_array[i]<=35){
            result[5]="FAIL";
        }
    }
    return result;
}

int calc_total(int marks_array[]){
    int sum=0;
    for (int i=0; i<sizeof(marks_array); i++) {
        sum+=marks_array[i];
    }
    return sum;
}

int calc_avg(int marks_array[]){
    int avg=0;
    for (int i=0; i<sizeof(marks_array); i++) {
        avg=calc_total(marks_array)/5;
    }
    return avg;
}

int calc_perc(int marks_array[]){
    int perc=0;
    for (int i=0; i<sizeof(marks_array); i++) {
        perc=(calc_total(marks_array)/500)*100;
    }
    return perc;
}

int main(){
    char name[30];
    int rollno;
    int student_marks[5];
    read_name(name);
    rollno=read_rollno;
    read_marks(student_marks);
    result=validate_marks(student_marks);
    
}
