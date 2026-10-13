message="Good Morning"
my_string="Hello, how are you?"
my_para='''Hello
How are you?
I am under the water'''

#indexing
print(message[0])
print(message[1])
print(message[2])
print(message[3])
print(message[5])
print(message[6])
print(message[7])
print(message[8])
print(message[9])
print(message[10])
print(message[11])

print(message[-1])
print(message[-2])
print(message[-3])
print(message[-4])
print(message[-5])
print(message[-6])
print(message[-7])
print(message[-9])
print(message[-10])
print(message[-11])
print(message[0])

#Slicing
print(message[::-1])
print("\n")
#Methods
print(message.lower())
print(message.upper())
print(message.strip())
print(message.__len__())
print(message.split())
print(message.count(message))
print(message.find('a'))
print(message.replace('Good','Bad'))