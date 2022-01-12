package main

import "fmt"

func main() {

	var a int
	var b int

	fmt.Println("Enter A : ")
	fmt.Scan(&a)

	fmt.Println("Enter B : ")
	fmt.Scan(&b)

	if a>b {
		fmt.Printf("%d is greater than %d \n",a,b)
	}else if a<b {
		fmt.Printf("%d is less than %d \n",a,b)
	}else {
		fmt.Printf("%d is equal to %d\n",a,b)
	}
	
}