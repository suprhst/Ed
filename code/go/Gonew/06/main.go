package main

import "fmt"

func main() {
	
	fmt.Println("Enter 1 ot 2 :")
	var a int
	fmt.Scan(&a)

	switch(a){

	case 1: 
		fmt.Println("You have entered One")
	
	case 2:
		fmt.Println("You have entered Two")
	
	default: 
		fmt.Println("Invalid Entry")
	
	}


}