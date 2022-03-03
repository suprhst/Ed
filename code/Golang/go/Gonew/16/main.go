package main

import "fmt"

func main(){
	// Functions

	fmt.Println(mul(10,2,3))


	// passing Arrays to func

	arrayOne := []int{1,2,3,4,5,6,7,8,9}
	
	fmt.Println(mul(arrayOne...)) // ... specify the values
	

}





func mul(args ...int)int{ 			// ... allows multiple without defining it before just need the datatype for the variables

	myMul := 1
	for _, i := range args {   // _ is from 0 or begining
		myMul *= i
	}
	return myMul
}