def input_data():
    my_list=[]
    tuple=()
    accountnumber=int(input("enter your account number:"))
    pannum=input("enter the PAN:")
    name=input("enter name: ")
    dob=input("enter date of birth:")
    tuple=(accountnumber,name,pannum,dob)
    my_list.append(tuple)
    address=input("enter your address:")
    my_list.append(address)
    email=input("enter your email:")
    my_list.append(email)
    mobile=int(input("enter your phone number:"))
    my_list.append(mobile)
    balance=500
    my_list.append(balance)
    return my_list
    
def display(my_list):
    print("account number: ",my_list[0][0])
    print("your PAN is:",my_list[0][1])
    print("your name is: ",my_list[0][2])
    print("your date of birth is: ",my_list[0][3])
    print("your address is: ",my_list[1])
    print("your email is: ",my_list[2])
    print("Your mobile number is ",my_list[3])

    print("\nYour account balance is: ",my_list[4])
def withdraw(my_list):
    amount=int(input("\nenter the amount to withdraw: \n"))
    my_list[4]=my_list[4]-amount
    print("your balance=",my_list[4])
    return my_list
def deposit(my_list):
    amount=int(input("\nenter the amount to deposit: \n"))
    my_list[4]=my_list[4]+amount
    print("your balance=",my_list[4])
    return my_list
n=int(input("enter account number: "))
mainlist=[]
for i in range(n):
    print(f"account {i+1} details: ")
    my_list=input_data()
    a=0   
    mainlist.append(my_list)
print("",mainlist)
end=0
while end==0:
    for J in range(n):
        account=int(input("enter your account number: "))
        if account==mainlist[J][0][0]:
            print("your details",mainlist[J][0])
            choice=0
            while choice!=3:
                choice=int(input("1. Display\n2. Withdraw\n3. Deposit\n4. Exit\nEnter your choice: "))
                if choice==1:
                    display(mainlist[J])
                elif choice==2:
                    withdraw(mainlist[J])    
                elif choice==3:
                    deposit(mainlist[J])
                elif choice==4:
                    end=1
                else:
                    print("Error: Please enter valid choice")
                                    

            break;     
        else:
            print("Error: Account not found")