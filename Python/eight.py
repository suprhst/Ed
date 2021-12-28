# Functions

a = int(input("Enter an Integer     : "))
b = int(input("Enter second Integer : "))

def addition(a,b):
    c = a + b
    print("The Total is ",c)

addition(a,b)


def square(x):
    return x*x

    
for i in range(10):
    print(f"The Square Of {i} is {square(i)}")