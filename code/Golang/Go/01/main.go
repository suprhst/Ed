package main

import (
	"fmt"
	"io/ioutil"
	"os"
)

func write(){
	file,err := os.Create("test.txt")
	if err !=nil {
		panic(err)
	}
	defer file.Close()
	_,err = file.WriteString("Hello\n")
	if err !=nil {
		panic(err)
	} 
}

func read() {
	data,err := ioutil.ReadFile("test.txt")
	if err!= nil {
		panic(err)
	}
	fmt.Println(string(data))
}
func main() {
	
	write()
	read()
}