import sys
from socket import *
import subprocess
from datetime import datetime

# clear screen 

subprocess.call('clear',shell=True)

try:
    host = sys.argv[1]

    host_ip = gethostbyname(host)
    print("|*|"*30)
    print("\n\t\t\t \t\tPort Scanner\n")
    print("|_|"*30)

    print(f"\n\tScanning {host} with ip {host_ip}\n")

    time_start = datetime.now()

    for port in range(1,10000):
        with socket(AF_INET,SOCK_STREAM) as sock:
            connection_test = sock.connect_ex((host_ip,port))
            if connection_test == 0:
                print(f"\t{port} is open in {host_ip}")

    time_end = datetime.now()

    time_total = time_end - time_start

    print(f"\n\tThe time taken for scan {time_total}")

except error:
    print("OOps something went wrong")

