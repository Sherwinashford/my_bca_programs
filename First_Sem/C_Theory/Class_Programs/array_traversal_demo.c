//Program to input size and values of array under condition of size being not smaller than 4, then print the array
#include <stdio.h>


int read_array_size(){
    int size;
    printf("Enter the size of the array(Must be >4): ");
    scanf("%d",&size);
    return size;    
}


int validate_array_size(int array_size){
    if (array_size>4){
        return 1;
    }
}
// int validate_array_size(int size){
//     if (size>=4){
    //         return 1; 
    //     }
    //     else {
        //         return 0;
        //     }
// }

int main(){
    int array[read_array_size()];
    int value;
    int isValid=1;
    do {
        int arraySize=read_array_size(); //stores returned value
        int isValid=validate_array_size(arraySize);
        if (isValid==1){
            printf("Enter value: ");
            scanf("%d",&value);
        }   
    }
    while (isValid==1); 

}
    

    
    // validate_array_size(read_array_size());
    // int arrayname[];