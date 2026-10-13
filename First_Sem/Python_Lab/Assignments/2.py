# Write a Python program to read a student's marks in three subjects (out of 100
# each) and calculate the total, average, and percentage. Assign the grade as
# follows:
# • 70% and above – DISTINCTION
# • 60% to below 70% – FIRST CLASS
# • 40% to below 60% – SECOND CLASS
# • Below 40% – FAIL
# Reject marks outside the range 0–100.


flag=0
marks=[]
for i in range(1,4):
    mark=int(input(f"Enter subject {i} marks: "))
    marks.append(mark)

total=sum(marks)
avg=total/3
perc=(total/300)*100

if (perc>100):
    flag=1
elif (perc >= 70):
    grade="Distinction"
elif (perc >= 60): 
    grade="First Class"
elif (perc>=40): 
    grade="Second Class"
elif (perc>=0):
    grade="Fail"
else:
    flag=1
    

if flag==1:
    print("Invalid input")
else:
    print("Total:",total)
    print("Average:",avg)
    print("Percentage:",perc)
    print("Grade:",grade)
