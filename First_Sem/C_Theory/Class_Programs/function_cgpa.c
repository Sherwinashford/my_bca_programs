

//predeccessor of function_return_demo.c
#include <stdio.h>
void student_prompt(int rollno, int sub1, int sub2, int sub3, int sub4, int sub5){  
    printf("Enter roll no:");
    scanf("%d",&rollno);
    printf("Enter sub1 marks:");
    scanf("%d",&sub1);
    printf("Enter sub2 marks:");
    scanf("%d",&sub2);
    printf("Enter sub3 marks:");
    scanf("%d",&sub3);
    printf("Enter sub4 marks:");
    scanf("%d",&sub4);
    printf("Enter sub5 marks:");
    scanf("%d",&sub5);
}

int getTotal(int sum, int sub1, int sub2, int sub3, int sub4, int sub5){
    sum=sub1+sub2+sub3+sub4+sub5;
    return sum;
}

float getAvg(int avg, int sum){
    avg=sum/5;
    return avg;
}

float getCGPA(int cgpa, int avg){
    cgpa=avg/9.5;
    return cgpa;
}

void displayStudentDetails(){
    printf("Roll no: %d",rollno);
    printf("Total: %d",sum); 
    printf("Average: %d",cgpa);
    printf("cgpa: %d",avg);

    
}

//collect student data
//calculate total of 5 subject marks
//calculate average mark
//get cgpa
//display student details. All in separate functions.
