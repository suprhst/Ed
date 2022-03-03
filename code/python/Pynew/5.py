# conditionals

a = input("Enter A Value : ")
b = input("Enter B Value : ")
if a > b:
    print("A is Grater than B")
elif a == b:
    print("A is Equal to B")
elif a < b:
    print("B is Grater Than A")
else:
    print("Invalid Argument")


num_one   = input("Enter some value : ")
num_two   = input("Enter some value : ")
num_three = input("Enter some value : ")

if num_one > num_two and num_one > num_three:
    print("the bigger value is ",num_one)
elif num_one < num_two or num_one < num_three:
    print("The value " , num_one," is smaller  than other ")
else:
    print("You have entered same value")


if num_one != num_two:
    print(("Not equal"))
