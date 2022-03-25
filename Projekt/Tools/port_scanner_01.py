# Simple port scanner

import socket
import sys

try:
    host = sys.argv[1]

# grab Input about host and port

#host = input("Enter host : ")

    for port in range(9000,9445):

        sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

        res = sock.connect_ex((host,port))

        if res == 0:
            print(f"{port} is open")
        else:
            pass
        #print(f"{port} is closed")
        sock.close()
except:
    print("Invalid Input")