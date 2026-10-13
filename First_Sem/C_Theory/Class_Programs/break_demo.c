#include <stdio.h>
int main() {
    for(int j=0;j<=5;j++){
        printf("Loop started\n");
        for(int i=0;i<5;i++){
            printf("Inner loop started\n");
            printf("From inner loop\n");
            if (i==1) {
                break;
            }
        }
        printf("From outer loop\n");
    }
    printf("Program terminated");
}
