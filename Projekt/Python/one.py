import subprocess


# Clear Screen
subprocess.call('clear',shell=True)

print("""
Choose an option

1). Update System 

2). Open Emacs

3). Open Firefox

4). Launch dmenu

5). Quit \n""")
try :
    choice = input(" : -> ")

    match choice :
        case '1':
            subprocess.call('sudo pacman -Syyu',shell=True)
        case '2':
            subprocess.call('emacs -nw',shell=True)
        case '3':
            subprocess.call('firefox &',shell=True)
        case '4':
            subprocess.call('dmenu_run',shell=True)
        case '5':
            subprocess.call('exit',shell=True)
        case _:
            print("Invalid Input")
except KeyboardInterrupt:
    print("\nInterrupt recieved exiting")
    exit(0)

