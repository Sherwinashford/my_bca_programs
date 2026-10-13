#Program to process a single student's data 
#Name, roll number, mobile number, email, afnan, email id, then 5 subject marks and get the subject total
# Implemented using nested list 

# mainlist=[
# ["abcd",111,"email",[mark1,mark2,mark3]],
# ["abcd",111,"email",[mark1,mark2,mark3]],
# ["abcd",111,"email",[mark1,mark2,mark3]]
# ]

def readData(studentlist):
    name='a'
    rollno=100
    mobile=1234567890
    email="a@domain.com"
    # name=input("Enter name: ")
    # rollno=input("Enter roll number")
    # mobile=int(input("Enter mobile number: "))
    # email=input("Enter email address: ")

    studentlist.append(name)
    studentlist.append(rollno)
    studentlist.append(mobile)
    studentlist.append(email)
    return name, rollno, mobile, email

def readMarks(markslist):
    for i in range (1,6):
        mark=int(input("Enter subject {i} marks: "))
    markslist.append(mark)
    return markslist

def calculateTotal(markslist):
    sum(markslist)
    return total

studentlist=[]
markslist=[]

total=calculateTotal(markslist)
