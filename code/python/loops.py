list_one = [1,2,3,4,5]


for a in list_one:
    print(a)

print(a)

for i in "abc":
    print(i)


for y in range(0,10):
    print(y)


user_1 = {'username': 'One','login':'user1'}
user_2 = {'username': 'Two','login':'user2'}
user_list =[user_1,user_2]

for user in user_list:
    print(user)

for user in user_list:
    print(user['username'])

for user in user_list:
    print(user['login'])


for k in range (1,10):
    print(k,". Hello")