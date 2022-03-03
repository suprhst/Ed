package main

import (
	"fmt"
	
)


func main(){

	// Array range

	num := []int {10,20,30,40,50}
	for i,n :=range num {
		fmt.Printf("Value at position %d is %d\n",i,n)
	}

	// Map Range

	mymap := map[string]int{"A" : 1 ,"B" : 2 ,"C" : 3 }

	for a,b:=range mymap {
		fmt.Printf("Key %s has value %d\n",a,b)
	}
}