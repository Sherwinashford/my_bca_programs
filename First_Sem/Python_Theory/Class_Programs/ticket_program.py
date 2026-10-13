#Ticket pricing system: Calculate a movie ticket price using if-elif-else based on age group (child, adult, senior citizen) combined with day-of-week discountpercs using logical operators (egL weekday vs weekend.)

#Ticket price: 250

#Age discount%:
#Child: 50%
#6-59: no discountperc because adult
#>60: 10% discountperc
 
#Weekend discountperc:
#Mon-Fri: No discountperc
# Sat-Sun: Price increase by 25%

#Output format:
# ==============================
#  TICKET
# ==============================
#  Movie    : The Shining
#  
# ==============================
#Enter movie name:
#Enter age: 
#Enter day of week: 
#Cost of ticket is Rs. [price] 

dayinput=input("Enter day of week:\n1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7.Sunday\n Enter name of day: ")
day=dayinput.lower()
if day=="saturday" or day=="sunday":
    priceincperc=25
else:
        priceincperc=0

age=int(input("Enter age: "))

if age<=5:
   discountperc=50
elif age<60:
        discountperc=0
elif age>=60:
            discountperc=10
else:
    print("Invalid input")

#time=input("Enter show timing [Morning/Afternoon/Evening]: ")
#NEED to process in order: day-->timings-->age (so other discounts are not calculated with default price)

priceinc=(priceincperc*250)/100
discount=(discountperc*250)/100
 
finalprice=250+priceinc-discount
print("Your ticket's price is: ",finalprice)


print('''

 ==============================
  TICKET
 ==============================
  Movie    : The Shining
  Seat	   : 14-H
 ==============================
______	   ____________________________________________________________________________
.     \\	  /  Z
.       v  z	
() ( ,' u)___ m__
||.;;;;;.\\-------|======/ ()
||********\\***************||
||          E             ||
||************************||
||                        ||
''')