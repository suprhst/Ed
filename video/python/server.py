import socket


server_sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

IP = '127.0.0.1'
PORT = 9040


server_sock.bind((IP,PORT))

server_sock.listen(5)

while True:
    comm_sock,address = server_sock.accept()
    print(f"Connection Established with {address}")
    msg = comm_sock.recv(1024).decode('utf-8')
    print(msg)
    comm_sock.send(f"Data Send Successfully".encode('utf-8'))
    print(f"Terminating connection with {address}")
    comm_sock.close()
    
    
