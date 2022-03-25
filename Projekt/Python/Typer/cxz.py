# simple note management

import sys
def cx():
    try:
        
            option = sys.argv[1]
            if option == 'w':
                with open('/home/varun/note.txt',"a") as file:
                    note = file.write(sys.argv[2])
                    note = file.write("\n")
            elif option == 'r':
                with open('/home/varun/note.txt',"r") as file:
                    data = file.read()
                    print(data)

            else:
                print("Choose an option r or w")
    except :
        print("\nPick an option r for read w for write")

if __name__=='__main__':
    cx()