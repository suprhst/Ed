# lists holds multiple values

users = ["Neo","Void","Null","None"]

print(users)
print(users[2])
print(users[0:3])
print(users[0:])
print(users[2:])

for n in users:
    print("Hello ",n)

def greeting():
    for n in users:
        print("Welcome ",n)

greeting()


users.append("Blink")
greeting()

zero_list = [0]

print(zero_list)

ten_list = [0] *10

print(ten_list)

# unpacking

items = ["Apple","Orange","R"]
one = items[0]
print(one)

print(items)

Apple,Orange,R = items

print(Orange)


Apple, *other =items
print(Apple)
print(other)
