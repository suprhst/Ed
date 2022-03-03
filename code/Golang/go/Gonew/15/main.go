package main

import "fmt"

func main(){
	// Functions


	fmt.Println(mul(10,2,3))
	

}





func mul(args ...int)int{ 			// ... allows multiple without defining it before just need the datatype for the variables

	myMul := 1
	for _, i := range args {   // _ is from 0 or begining
		myMul *= i
	}
	return myMul
}