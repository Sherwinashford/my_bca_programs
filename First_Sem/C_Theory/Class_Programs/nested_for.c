#include <stdio.h>
int main(){  
    int counter=15;
    for (counter=15;counter>1;counter--)
    {
        printf("%d\n",counter);
    }
            if (counter==1) {
            for (int counter2=1;counter2<=15;counter2++) {
                printf("%d ",counter2);
            }
        }
}

//Expected Output:
//50
//    
//3...
//2
//1 2 3 4 5... 15