# Port Scanner

import sys
from socket import *
import subprocess
from datetime import datetime

subprocess.call('clear',shell=True)

print("|_|" * 30)
print("\n\t\t\t\t\tPort Scan\n")
print("|_|" * 30)
try :
    host = sys.argv[1]


    host_ip = gethostbyname(host)
    

    print(f"\n\n\t Scanning :   {host} with ip {host_ip}")

    print("\n\t The list of open ports are as follows : \n")

    time_start = datetime.now()

    for port in range (0,10000):
        with socket(AF_INET,SOCK_STREAM) as sock:
            connection_test = sock.connect_ex((host_ip,port))
            if connection_test ==0:
                print(f"\t {port} is open for {host_ip}")
            
            


    time_end = datetime.now()
    time_taken = time_end - time_start
    print(f"\n\t Time taken {time_taken} \n\n ")



except gaierror:
    print("\n\n\t\tcouldnt identify the host :(")
    exit()

except error :
    print("\n\n\t\t Oops something went wrong :(")

except KeyboardInterrupt:
    print("\n\n\t\tKeyboard interrupt ")
    sys.exit()
