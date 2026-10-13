# Develop a menu-driven Python application for a single bank account with the
# options Deposit, Withdraw, Display Account Details, and Exit. The menu should
# repeat until the user exits. Display confirmation messages for successful
# transactions and error messages for invalid choices, negative amounts, and
# insufficient balance.


#Expected Output:
#------Welcome to my Bank------
#1. Create Account
#2. Deposit
#3. Withddraw
#4. Account View
#5. Exit
#Enter your option: 1
#Enter account number: 1000

balance=500
accid=1000
while True:
    print("1. Deposit\n2. Withdraw\n3. Account View\n4. Exit")
    choice=int(input("Enter choice [1-4]: "))
    if choice==1:
        deposit=int(input("Enter deposit amount: "))
        balance+=deposit
        print("Account balance updated. Your new balance is",balance)
    elif choice==2:
        print("Balance:",balance)
        withdraw=int(input("Enter withdraw amount: "))
        if (withdraw>=balance):
            print("Error: Insufficient funds")
            break
        else:
            balance-=withdraw
            print("Balance updated. Your new balance is",balance)
    elif choice==3:
        inputid=int(input("Enter account number: "))
        if (inputid==accid):
            print("Account ID valid.")
            print(f"Your account number is {accid} \nYour balance is {balance}")
    elif choice==4:
        break
    else:
        print("Invalid input")
    