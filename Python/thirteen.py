# Functional

def announce(f):
    def wrapper():
        print("Going to Run the func ....")
        f()
        print(" Done .....")
    return wrapper

@announce
def hello():
    print("Hello World")

hello()