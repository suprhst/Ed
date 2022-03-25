# Encryption

def encrypt(file_name,key):
    with open(file_name,"rb") as f :
        data = f.read()
        data =bytearray(data)
        for i,j in enumerate(data):
            data[i] = j ^ key

        with open(file_name+"-ENC","wb") as w:
            content = w.write(data)
        


encrypt("a.txt",25)

def decrypt(file_name,key):
    with open(file_name,"rb") as f :
        data = f.read()
        data =bytearray(data)
        for i,j in enumerate(data):
            data[i] = j ^ key

        with open(file_name+"-DEC","wb") as w:
            content = w.write(data)

decrypt("a.txt-ENC", 25)
        