// Student Marks Processing
// Write a C program to read a student's roll number and marks in five subjects using
// scanf(). Calculate the total marks, average and percentage, and display the
// results in a formatted manner.
#include <stdio.h>
// int findTtlAvg(int eng, int math, int python, int total, int avg, int perc){


int main(){
   int eng,math,python,total,avg,perc;
    total=eng+math+python;
    avg=total/3;
    perc=(total/300)*100; //Percentage formula makes no difference; avg=perc
    print("Total Mark:",total);
    print("Average Mark:",avg);
    printf("The Total Percentage is %.2f",perc); //print("Total Marks%:",perc,"%"), except you get to limit decimal spaces
    return(total,perc);
    int eng,math,python,total,perc;
    printf("Enter First Student: ");
    scanf("%c",&name);
    printf("English Mark:");
    scanf("%d",&eng);
    math= int(input("Math Mark: "));
    python= int(input("Python Mark: "));
    total,perc=findTtlAvg(eng,math,python);    
}