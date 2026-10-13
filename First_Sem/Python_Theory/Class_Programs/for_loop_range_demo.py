#for letter in range(121,420,2):
#   print(f"{letter}: Good Morning")

#Write a program that loops through all numbers from 1 to n using a for loop and range() compute and print:
#The sum of even numbers, count of numbers divisible by 3 and 5, largest prime number found, digit-sum of perfect squares and a running total printed every time the total crosses a multiple of 100
n=int(input("Enter value of n: "))
sumcount=0
divcount=0
primenumlist=[]
perfsq=0
for i in range(1,n):
    if i%2==0:
        sumcount+=i
    if i%3==0 and i%5==0: #if i is divisible by 3:
        divcount+=1 
    if i%i==0: #if i is a perfect square:
        while dig!=0:
            dig=i%10

#    NotPrimeNum=0
#    for j in range(1,i+1):
#        if i%j==0 and (j!=1 or j!=i): #Checks if i is divisible by j, then checks if it is divisible by 3 and 5
#            NotPrimeNum=1
#        else:
#            primenumlist.append(i)

print("Primelist:",primenumlist)
print("Sumcount:",sumcount)
print("Divcount:",divcount)

#print("Perfect square sum:",sum(perfsq))
