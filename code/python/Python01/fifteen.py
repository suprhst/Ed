import sys
try:
    x = int(input("x : "))
    y = int(input("y : "))
except ValueError:
    print("Invalid Input :(")
    sys.exit(1)
try :
    result = x/y
except ZeroDivisionError:
    print("Error Cannot divide with zero ")
    sys.exit(1)
print(f"{x} / {y} = {result}")