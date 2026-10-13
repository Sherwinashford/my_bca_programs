#include <stdio.h>

int main(){
    //Declaring required variables
    int ticketnum,category,totalcount;
    int i=0,isDiscountApplied=0;
    int regular=0,premium=0,recliner=0; //Counts number of tickets for each type
    float discount,totalbill,finalbill;

    printf("Enter number of tickets to book: ");
    scanf("%d",&ticketnum);
    while (i<ticketnum) {
        printf("Enter category for ticket[1/2/3]: ");
        scanf("%d",&category);
        if (category==1) {
            regular+=1;
        }
        else if (category==2) { 
            premium+=1;
        }
        else if (category==3) {
            recliner+=1;
        }
        else {
            printf("Invalid input");
        }
        i++;
    }

    //Calculating total number of tickets
    totalcount=regular+premium+recliner;
    //Calculating the total cost of all tickets
    totalbill=regular*150+premium*250+recliner*400;
    
    //Here, we are checking for the discount condition with a simple-if check
    if (totalcount>=5) {
        discount=(10*totalbill)/100; //This formula returns the discounted amount
        isDiscountApplied=1; //Initial value of the variable is set to 0. On condition being met, the value changes to 1.
    }

    //Applying the discounted amount to the total bill
    finalbill=totalbill-discount; 

    //Printing output with specified details
    printf("\n--- Final Bill ---\n");
    printf("Regular tickets: %d\n",regular);
    printf("Premium tickets: %d\n",premium);
    printf("Recliner tickets: %d\n\n",recliner);
    printf("Total (before discount): %.2f\n",totalbill);
    
    if (isDiscountApplied==1) { //Another if check used to print either 'Yes' or 'No' as output (we weren't yet taught how to store strings in variables) 
        printf("Discount applied: Yes");
    }
    else {
        printf("Discount applied: No");
    }
    
    printf("\nFinal Amount: %.2f",finalbill);
}