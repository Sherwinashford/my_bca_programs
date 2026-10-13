def findTtlAvg(eng,math,python):
    total=eng+math+python
    avg=total/3
    perc=(total/300)*100 #Percentage formula makes no difference; avg=perc
    print("Total Mark:",total)
    print("Average Mark:",avg)
    print(f"The Total Percentage is {perc:.1f}%") #print("Total Marks%:",perc,"%"), except you get to limit decimal spaces

    return(total,perc)
name1=input("Enter Name of First Student: ")
eng1= int(input("English Mark: "))
math1= int(input("Math Mark: "))
python1= int(input("Python Mark: "))    
total1,perc1=findTtlAvg(eng1,math1,python1)

name2=input("Enter Name of Second Student: ")
eng2= int(input("English Mark: "))
math2= int(input("Math Mark: "))
python2= int(input("Python Mark: "))    
total2,perc2=findTtlAvg(eng2,math2,python2)

print(f"NAME\t\tPYTHON\tENGLISH\tMATHS\tTOTAL\t%")  # noqa: F541
print(f"{name1}\t\t{python1}\t{eng1}\t{math1}\t{total1}\t{perc1:.1f}") #name has two \ts to provide space
print(f"{name2}\t\t{python2}\t{eng2}\t{math2}\t{total2}\t{perc2:.1f}")
#or print(f"{name1:>20}{python1}\t{eng1}\t{math1}\t{total1}\t{perc1:.1f}")
#                  ^ Limits the name and cuts off after 20 characters. If < symbol is used, name becomes right-justified 

#Things learnt:
#You can use print(f"\t") to add indentation-like spaces. (Ln 23)
#print(f"{perc:.1f}") limits the decimal places (Ln 26)
#You can use print(f"{'name:>20}) to limit no. of characters in the cell. (Ln 27)