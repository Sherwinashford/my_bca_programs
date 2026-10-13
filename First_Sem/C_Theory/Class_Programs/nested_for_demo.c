#include <stdio.h>
int main(){
//        for (int i=1; i<=6; i++) {
//        printf("\n");
//        for (int j=1; j<=i; j++){
//            printf("%d ",j);
//}
//    }    
//The above program prints a stairway from 1 to 6 ascending
    for (int i=5; i>=0; i--) {
        printf("\n");
        for (int j=1; j<=i; j++){
            printf("%d ",j);
}
    }
//The above program prints an inverted stairway from 1 to 5 descending
}

//1 2   4 5
//1 2 3 4
//1   3
//1 2
//1
//Use if condition as per loop counter