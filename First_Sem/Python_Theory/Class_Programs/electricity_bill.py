#Calculate a household's electricity bill using if-elif-else based on units consumed (slab-wise rates - eg: 0-200 units at one rate, 101-300 at a higher rate, 300+ at the highest rate), then apply an additional surcharge using logical operators if the household is in teh commercial category and consumption exceeds a peak threshold, or apply a discount if the payment is made before the due date. or apply a discount if the payment is made before the due date
#Commercial		    Non-Commercial 
#0-100=Rs 10/unit     Rs 5/unit
#101-300=12/unit	  Rs 6/unit
#>300=Rs 15/unit	  Rs 8/unit
#penalty=100		  Rs 50
#Is peak threshold found [yes/no]

housetypeinput=input("Enter house type [Comm/Noncomm]: ")
housetype=housetypeinput.lower()

if housetype=="comm":
    consumrate=int(input("Enter number of units consumed : "))  
    if consumrate>=100:
        billamt=10*100
    if consumrate<300:
        consumrate-=100
        billamt+=12*100
        consumrate-=100
    if consumrate>300:
        billamt=15*100
        penaltycount=consumrate//100    
        billamt+=100*penaltycount
elif housetype=='noncomm':
    consumrate=int(input("Enter number of units consumed : "))  
    if consumrate>=100:
        billamt=5*100
    if consumrate<300:
        consumrate-=100
        billamt+=6*100
        consumrate-=100
    if consumrate>300:
        billamt=8*100
        penaltycount=consumrate//100
        remainder=consumrate%100
        billamt+=100*penaltycount

#thresflag=input("Is peak threshold found [Y/N]: ")
#thresflag=thresflag.lower()

print("Total Bill: ",billamt)
        #use % at some point

#200*15=3000 (wrong)
#100 x 10 and 100 x 12 = 2200
#Calculate slab-wise rates each

