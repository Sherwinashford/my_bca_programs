#firstnumber=input('Enter first number')
#secondnumber=input('Enter second number')
#sum=int(firstnumber)+int(secondnumber)
#print(sum)

choice=int(input('1. Add two integers\n2. Add two float numbers\n 3. Add integer and float number\n Choose an option [1-3]: '))
if choice==1: #conversion happens before calculation
    firstnumber=input('Enter first number: ')
    secondnumber=input('Enter second number: ')
    firstnumber=int(firstnumber)
    secondnumber=int(secondnumber)
    sum=firstnumber+secondnumber
    print(sum)
elif choice==2: #conversion happens during processing
    firstnumber=input('Enter first float number: ')
    secondnumber=input('Enter second float number:')
    sum=float(firstnumber)+float(secondnumber)
    print(sum)
elif choice==3:
    firstnumber=float(input('Enter float number: '))
    secondnumber=int(input("Enter integer: "))