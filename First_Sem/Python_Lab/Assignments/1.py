# Write a Python program to read two integers using input() and int(), and
# display the results of all arithmetic operations between them (+, -, *, /, //, %, **).
# Display an error message if division by zero is attempted.

#num1=input('Enter first number')
#num2=input('Enter second number')
#sum=int(num1)+int(num2)
#print(sum)


num1=int(input('Enter first number: '))
num2=int(input('Enter second number: '))
sum=num1+num2
diff=num1-num2
prod=num1*num2
mod=num1%num2
exp=num1**num2
if (num2==0):
    print("Error: Cannot divide by zero")
else:
    quo=num1/num2
    floor=num1//num2
    print("Sum: ",sum)
    print("Difference: ",diff)
    print("Product: ",prod)
    print("Quotient: ",quo)
    print("Floor: ",floor)
    print("Modulo: ",mod)
    print("Exponent: ",exp)