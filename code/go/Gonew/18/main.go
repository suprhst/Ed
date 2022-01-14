package main

import "fmt"


func main(){
	// Pointers

	var a int
	a = 15

	fmt.Println(a)

	fmt.Println(&a) // Pointer &a -> shows the memory address


	pointer := &a

	fmt.Println(pointer)

	fmt.Println(*pointer) // dereferencing the pointer (display the value stored not the memory address)


}

