// Declare an int pointer and initialize with malloc; allocate space for 5 int data and display the values stored in each location
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=20;
    int *p=&a;
    p=(int *) malloc(5* sizeof(int));
    for (int i=0; i<5; i++){ //Storing value for each position
        printf("Enter value for position %d: ",i);
        scanf("%d",&p[i]);
    }

    for (int i=0; i<5; i++){ //printing 
        printf("Value in position %d is %d\n",i,p[i]);
    }
}


