#include <stdio.h>

int main(){
    int i=1;
    while (i>=0)
    {
        int j=1;
        printf("\n");
        while (j<i) {
            printf("%d ",j);
            j++;
        }
        i++;
    }
    return 0;
}

//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//C theory class program folder in repository