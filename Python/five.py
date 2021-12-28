name_val = "Mike"
# String is Sequence of characters  
print(name_val[0])
print(name_val[1])
print(name_val[2])
print(name_val[3])


# Lists are mutable
list_one = ["One","Two","Three","Four"]
print(list_one)

print(list_one[0])
print(list_one[1])
print(list_one[2])
print(list_one[3])

# Methods
list_one.append("Five")
print(list_one)

list_one.sort()
print(list_one)



#Tuples are immutable
tuple_one = (10.0,20.0)
print(tuple_one)

print(tuple_one[0])
print(tuple_one[1])

#set collection of unique values

set_one = set()
set_one.add(1)
set_one.add(2)
set_one.add(3)
set_one.add(4)
print(set_one)

set_two = {5,6,7,8}
print(set_two)

set_two.remove(7)
print(set_two)

# length of set
print(f"The set has {len(set_two)} Elements")




