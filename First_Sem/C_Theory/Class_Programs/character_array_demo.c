//program to declare a character array and initialize it with your name

#include <stdio.h>
int main(){
    char name[30]="Abhishek Chowdhary";
    char string2[20];
    char string3[30];
    // printf("Enter name: ");
    // scanf("%29s",name);
    printf("%s: normal",name);
    printf("\n%10s: right aligned, width 10",name);
    printf("\n%-10s: left aligned, width 10",name);
    printf("\n%.3s: first 3 chars only",name);
    fgets(string2,sizeof(string2),stdin);

char word[]="Program";
for (int i=0;word[i]!='\0';i++){
    printf("word[%d]=%c\n",i,word[i]);
}

}

// Chowdhary