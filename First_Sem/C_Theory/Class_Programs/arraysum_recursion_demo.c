//Get the sum of array element with arraysize N using recursion function
#include <stdio.h>
int get_arraysum(int number[]){
    int sum=0;
    for (int i=0; i<5){
    if (sum==0){
        return number[i];
    }
    return number[i]+get_arraysum(i-1);
    }
    // for (int i=0;i<5;i++){
    //     sum+=number[i];
    // }
    // return sum;    
}


int main(){
    int mynumber[5];
    //array initialization
    for (int i=0;i<5;i++){
        printf("Enter the %d number:",i+1);
        scanf("%d",&mynumber[i]);
    }
    //calculate the sum and returns sum
    int total=get_arraysum(mynumber);
    printf("The sum is %d",total);
}


// trace
// i=0
// sum=1

// i=1
// sum=3

// i=2
// sum=6

// i=3
// sum=10

// i=4
// sum=15

// i=5
// sum=15
