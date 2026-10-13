#  Y
# ( )
# (
#  )
# (
#  )
# (
#  )
# (
#  )
# (
#  )
# (
#  )
# ( 
#  )

#python script to demonstrate bank operations using list and tuples 
#tuple: accname,accno-1000, pan, dob
#list: balance, email, contactno, address-cityname
#tuple in list

def read_Account_Data():
    accname='Krishnamurthy'
    accno=1000
    pan=10020
    dob='26-09-1994'
    account_tuple.append(accname,accno,pan,dob)
    return account_tuple
    # return accname, accno, pan, dob

def read_Data(account_list):
    email='gmale@gmail.com'
    contactno='9876543210'
    address='mangalore'
    balance=500
    account_list.append(email,contactno,address,balance)
    # return email, contactno, address

def deposit_Operation(balance):
    print("Your balance is ",balance)
    balance+=int(input("Enter money to deposit: "))
    return balance

def withdraw_Operation(balance):
    print("Your balance is ",balance)
    balance-=int(input("Enter amount to withdraw: "))
    return balance

def welcome_Menu():
    print("----WELCOME TO THE BANK----\n1. Create an account\n2. Deposit\n 3. Withdraw")

while True:
    welcome_Menu()
    choice=int(input("Enter your option: "))
    if choice==1:
        account_tuple=read_Account_Data()
    if choice==2:
        account_list=read_Data