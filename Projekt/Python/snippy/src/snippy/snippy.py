#!/usr/bin/python
import sys
import typer
import os
import getpass

user = getpass.getuser()
file_path = '/home/'+user+'/note.txt'
tmp_file = '/home/'+user+'/tmp.txt'



app=typer.Typer()

# Adds Note to txt file

@app.command(short_help='Add  note')
def a(note: str):
    with open(file_path,"a") as file:
                    note = file.write(sys.argv[2])
                    note = file.write("\n")
                    typer.echo(f"Added  ")

# Reads notes from txt file

@app.command(short_help='Read notes')
def r():
    with open(file_path,"r") as file:
                    data = file.read()
                    typer.echo(f"{data}")

#Delete lines

@app.command(short_help='Deletes line')
def d(input: str):
    with open(file_path,'r') as file:
        lines = file.readlines()
        with open(tmp_file,'w') as file_one:
            for line in lines:
                if line.strip("\n") != input:
                    file_one.write(line)
    os.replace(tmp_file,file_path)

# Search text
@app.command(short_help='Search string')
def s(query: str):
    with open(file_path,'r') as file:
        content = file.read()
        if query in content:
            print(f"{query} is in the file")
        else:
            print(f"{query} is not in the file")




if __name__ =="__main__":
    app()
