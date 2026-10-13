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

#include <stdio.h>

void read_name(char name[]){
    printf("Enter Name: ");
    scanf("%s",name);
}

int read_rollno(){
    int rollno;
    printf("Enter roll number: ");
    scanf("%d",&rollno);
    return rollno;
} 

void read_marks(int student_marks[5]){
    for (int i=0; i<5;i++){
        printf("Enter subject %d marks: ",i+1);
        scanf("%d",&student_marks[i]);
    }
}

int validate_marks(int marks_array[]){
    for (int i=0; i<5; i++){
        if (marks_array[i]<35){
            return 0;
        }
    }
    return 1;
}

int calc_total(int marks_array[]){
    int sum=0;
    for (int i=0; i<5; i++) {
        sum+=marks_array[i];
    }
    return sum;
}

float calc_avg(int total){
    float avg=0;
    avg=(float)total/5;
    return avg;
}

float calc_perc(int total){
    float perc=0;
    perc=((float)total/500)*100;
    return perc;
}

void display_result(int rollno, char name[], int total, float avg, float perc) {
    printf("\n---- Results ----\n");
    printf("Roll No: %d\n", rollno);
    printf("Name: %s\n", name);
    printf("Total: %d/500\n", total);
    printf("Average: %.2f\n", avg);
    printf("Percentage: %.2f%%\n", perc);
}

int main(){
    char name[30];
    int rollno, total;
    int student_marks[5];
    float avg, perc;
    char result[5];

    //reading data
    read_name(name);
    rollno=read_rollno();
    read_marks(student_marks);

    //processing data
    int resultflag=validate_marks(student_marks);
    
    total=calc_total(student_marks);
    avg=calc_avg(total);
    perc=calc_perc(total);
    
    display_result(rollno, name, total, avg, perc);

}
