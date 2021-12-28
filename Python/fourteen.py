people = [
    {"name":"Sam","id":"3"},
    {"name":"Tim","id":"2"},
    {"name":"Kim","id":"1"}
]

#def fun(person):
#    return person["id"]

# same thing implemented with lambda

people.sort(key=lambda person: person["id"])

print(people)
