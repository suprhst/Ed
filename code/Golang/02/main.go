package main

import "fmt"



func main() {

	var b string

	a := "Hello"

	
	if a == "Hello" {
		fmt.Println("is Hello")

	}else {
		fmt.Println("Not Hello")
	}
	if b == "" {
		fmt.Println("primitive zero values are not always nil")
		fmt.Println(b)
	}
}