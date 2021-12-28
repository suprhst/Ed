
if True:
    print("Hello ")

if False:
    print("None")

if not False:
    print("Not False")

if not True:
    print("Not True")
    
if 10>1 :
    print("Valid")

if 2<1:
    print("None")

a = 10
b = 20
if a>b:
    print("A is big")
else:
    print("B is big")

c = 1
d = 1
if c == d:
    print("Both Values are equal")

e = input("Enter First Value  : ")
f = input("Enter Second Value : ")
if e==f:
    print("First And Second Values are Same :)")
elif e>f:
    print("First Value is Bigger  :) ")
else:
    print("Second Value is Bigger :) ")
    
i = 0
while i < 10:
    print(i)
    i += 1


x = 10
i = 0
y = 290
while i<x:
    y= y+10
    if y>300:
        print(y)
        break
    print(y,i)
    i = i+1

x = 10
i= 0 
while i > 10:
    if i %2 == 0:
        print("Even")
    else:
        continue
    i += 1