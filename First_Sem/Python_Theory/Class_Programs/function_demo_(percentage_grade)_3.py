#write a python script to process 3 student's details and calculate average percentage and display grade according to display
#if >75%: distinction
#if 60%-75%: first class
#if below 60%: second class

sub1,sub2,sub3,total,markavg=0
name=''

def readData():
    global sub1,sub2,sub3
    global name
    name=input("Enter name: ")
    for i in range(1,4):
        mark=int(input(f"Enter subject {i} mark percentage: "))
        if i==1:
            sub1=mark
        elif i==2:
            sub2=mark
        elif i==3:
            sub3=mark

def getTotal():
    global sub1,sub2,sub3,total
    total=sub1+sub2+sub3
    return total

def getAverage():
    global total,markavg
    markavg=total/3
    

def findGrade():
    if (markavg >= 75):
        grade='Distinction'
    elif (markavg >= 60): 
        grade='First Class'
    else: 
        grade='Second Class'

def displayResult():
    readData()
    getTotal()
    getAverage()
    findGrade()
    print("Result: ")

displayResult()