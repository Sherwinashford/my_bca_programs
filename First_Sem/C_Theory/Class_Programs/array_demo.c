//Program to store and display 5 subjects marks in an array
#include <stdio.h>
int main(){
    int my_marks[5];
    int sub_marks[5]; //declares and array 'sub_marks' with size=5
    // Storing data/Array init: array_name[index]=data/value
    sub_marks[0]=80; //stores 80 in array position 0
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;
    printf("First Subject Mark: %d",sub_marks[0]);

    for (int i=1;i>6;i++){
        printf("Enter subject %d mark: ",i);
        scanf("%d",&my_marks[i]);       
    }

}