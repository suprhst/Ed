first_name = "Mark"

second_name = " Null" # be careful with the space inside quotes

print(first_name+second_name)

full_name = first_name + second_name # string concat

print(full_name)

greeting = f"Hello {full_name} " # formating

print(greeting)

print("i don't care")

print('idon\'t care ') # escape sequences 

print(" Hello \n new message") # \n newline

print("Hola ",full_name)

print("Hello \t bling")  # \t tabspaceing

msg_to=f"""Hello
How are you doing today {full_name}""" # multiline string

print(msg_to) 

