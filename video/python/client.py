import socket


client_sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)

IP = '127.0.0.1'
PORT = 9040

client_sock.connect((IP,PORT))

client_sock.send("Hello there ".encode('utf-8'))
print(client_sock.recv(1024))
