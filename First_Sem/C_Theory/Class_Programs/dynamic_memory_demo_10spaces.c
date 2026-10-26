// write a c programm to allocate memory for 10 int data and get sum of those elements but size should be allocated dynamically using either
//  malloc or calloc. Display sum and free memory. Comment every line.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p; // declaring a pointer p
    p=(int *) malloc(10 * sizeof(int)); // using malloc to initialize p with 10 times the memory space needed for one integer; i.e. space for 10 integers
    for (int i=0; i<10; i++){ // for loop to add values to each position in p
        printf("Enter value %d to add to pointer: ",i+1);
        scanf("%d",&p[i]); // for every value of i, there is a position in p to store a value (10 values)
    }

    for (int i=0; i<10; i++){ // another for loop to display all values stored, line-after-line
        printf("Value in position %d is %d\n",i,p[i]); //for every value of i, there is a position in p with a stored value to be displayed (10 values)
    }
    free(p);
}
