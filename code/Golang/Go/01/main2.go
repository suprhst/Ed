package main

import (
	
	"os"
	"fmt"
)

func main() {
	a:= os.Args[1]
	
	if a == "w" {
		write()
	}else if a =="r"{
		read()
	}
	
}

// Function to read from file

func read(){
	content,err :=os.ReadFile("Hello.txt")
	if err !=nil {
		panic(err)
	}
	fmt.Println(string(content))
}


// Function to write to file

func write() {
	f,err := os.OpenFile("Hello.txt",os.O_CREATE|os.O_APPEND|os.O_WRONLY,0600)
	if err !=nil {
		panic(err)
	}
	defer f.Close()
	if _,err =f.WriteString(os.Args[2]+"\n"); err !=nil{
		panic(err)
	}
}

