#Program to store marks obtained by a student in 5 subjects using lists

subjects=[]
marks=[]

count=int(input("Enter number of subjects: "))
for i in range(count):
    subinput=input("Enter subject name: ")
    subjects.append(subinput) #subjects+=subinput
    markinput=int(input("Enter mark of subject: "))
    marks.append(markinput)
    
for i in range(count):
    print(f"Subjects\t{subjects[i]}")
    print(f"Marks   \t{marks[i]}")