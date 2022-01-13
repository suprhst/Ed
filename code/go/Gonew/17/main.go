package main

import "fmt"

func main(){
	// Functions


	// closure

	nextEvenNumber := evenNumbers()
	fmt.Println(nextEvenNumber())
	fmt.Println(nextEvenNumber())
	fmt.Println(nextEvenNumber())
	fmt.Println(nextEvenNumber())



}

func evenNumbers() func() int{           // Return is a function which return an integer
	i:= 0

	return func() int {
		i += 2
		return i
	}
}
